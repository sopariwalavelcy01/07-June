#include <stdio.h>
#include <string.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #define SLEEP_MS(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define SLEEP_MS(ms) usleep((ms) * 1000)
#endif

struct LyricLine {
    int timestamp_ms; // Milliseconds me time
    char *text;
};

// Character-by-character fast print function
void print_typewriter(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        SLEEP_MS(25); // Fast typing effect (25ms per letter)
    }
    printf("\n");
}

int main() {
    // Real-time precise delay between lines (in milliseconds)
    struct LyricLine song[] = {
        
        {4000, "[2:04] Tere liye mandir jaaoon"},
        {4500, "[2:13] Tere naam ka diya jalaaoon"},
        {4500, "[2:20] Hansataa rahe too chaahe jo ho"},
        {4500, "[2:26] Teri hansee ko nazar naa lage kagaz ke phool "},
        {4500, "[2:33] laaun tere liye Khat likhuun "},
        {4500, "[2:40] Tere liye Main khuda mein"},
        {4500, "[2:45] Maanoon nahin Par maangoon dua tere liye"},
        {4500, "[2:52] Tere liye"},
    };

    int total_lines = sizeof(song) / sizeof(song[0]);

    printf("--- Song Playback Started ---\n\n");

    for (int i = 0; i < total_lines; i++) {
        // Line length ke hisab se typing me kitna time laga calculate karo
        int text_length = strlen(song[i].text);
        int typing_duration = text_length * 25; 
        
        // Remaining gap wait karo taaki extra delay na bane
        int remaining_wait = song[i].timestamp_ms - typing_duration;
        
        if (remaining_wait > 0) {
            SLEEP_MS(remaining_wait);
        }

        print_typewriter(song[i].text);
    }

    return 0;
}