import tkinter as tk
import time

class FloatingStopwatch(tk.Tk):
    def __init__(self):
        super().__init__()

        self.title("Floating Stopwatch")
        self.geometry("200x100")
        self.overrideredirect(True)  # Remove window borders

        # Configure a dark theme
        self.configure(bg="#333")
        self.time_label = tk.Label(self, text="00:00:00", font=("Helvetica", 20), fg="white", bg="#333")
        self.time_label.pack(pady=20)

        # Create buttons with custom styles
        button_style = {"bg": "#444", "fg": "white", "activebackground": "#555", "activeforeground": "white"}
        self.start_button = tk.Button(self, text="Start", command=self.start_stopwatch, **button_style)
        self.start_button.pack(side="left")
        self.stop_button = tk.Button(self, text="Stop", command=self.stop_stopwatch, **button_style)
        self.stop_button.pack(side="left")
        self.minimize_button = tk.Button(self, text="-", command=self.minimize_window, **button_style)
        self.minimize_button.pack(side="left")
        self.close_button = tk.Button(self, text="X", command=self.close_window, **button_style)
        self.close_button.pack(side="right")

        # Initialize variables
        self.running = False
        self.start_time = 0
        self.update_interval = 100  # milliseconds
        self.minimized = False

        # Place the window always on top
        self.wm_attributes("-topmost", 1)

        # Mouse event handlers for window dragging
        self.dragging = False
        self.last_x = 0
        self.last_y = 0
        self.bind("<ButtonPress-1>", self.start_drag)
        self.bind("<ButtonRelease-1>", self.stop_drag)
        self.bind("<B1-Motion>", self.on_drag)

    def start_drag(self, event):
        self.dragging = True
        self.last_x = event.x_root
        self.last_y = event.y_root

    def stop_drag(self, event):
        self.dragging = False

    def on_drag(self, event):
        if self.dragging:
            x = event.x_root - self.last_x
            y = event.y_root - self.last_y
            new_x = self.winfo_x() + x
            new_y = self.winfo_y() + y
            self.geometry(f"+{new_x}+{new_y}")
            self.last_x = event.x_root
            self.last_y = event.y_root

    def start_stopwatch(self):
        if not self.running:
            self.start_time = time.time()
            self.update_time()
            self.running = True

    def stop_stopwatch(self):
        if self.running:
            self.running = False

    def update_time(self):
        if self.running:
            elapsed_time = time.time() - self.start_time
            hours = int(elapsed_time // 3600)
            minutes = int((elapsed_time % 3600) // 60)
            seconds = int(elapsed_time % 60)
            time_str = f"{hours:02d}:{minutes:02d}:{seconds:02d}"
            self.time_label.config(text=time_str)
        self.after(self.update_interval, self.update_time)

    def minimize_window(self):
        if not self.minimized:
            self.withdraw()  # Hide the window
            self.minimized = True
        else:
            self.deiconify()  # Show the window
            self.minimized = False

    def close_window(self):
        self.destroy()

if __name__ == "__main__":
    app = FloatingStopwatch()
    app.mainloop()
