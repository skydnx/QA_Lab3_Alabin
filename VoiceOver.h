#ifndef VOICEOVER_H  // Проверяем, не подключён ли уже этот файл
#define VOICEOVER_H  // Определяем VOICEOVER_H, чтобы предотвратить повторное включение заголовочного файла

#include "AudioFile.h"  // Подключаем базовый класс AudioFile

/**
 * @brief Класс голосовой озвучки.
 *
 * Этот класс наследуется от `AudioFile` и добавляет имя диктора.
 */
class VoiceOver : public AudioFile {  // Класс VoiceOver наследуется от AudioFile
public:
    string speakerName;  ///< Имя диктора, записавшего голосовую дорожку

    /**
     * @brief Конструктор класса VoiceOver.
     * @param n Название файла
     * @param d Длительность в секундах
     * @param b Битрейт (в kbps)
     * @param speaker Имя диктора
     *
     * Конструктор вызывает конструктор родительского класса `AudioFile`
     * и добавляет поле `speakerName`.
     */
    VoiceOver(string n, int d, int b, string speaker)
        : AudioFile(n, d, b), speakerName(speaker) {}

    /**
     * @brief Выводит информацию о голосовой записи.
     *
     * Этот метод переопределяет `info()` из `AudioFile`,
     * добавляя информацию о дикторе.
     */
    void info() override {  // Переопределяем виртуальный метод info()
        cout << "Голосовая запись: " << name << ", Длительность: " << duration
            << " сек, Битрейт: " << bitrate << "kbps, Диктор: " << speakerName << endl;
    }
};

#endif // Завершаем условную компиляцию (если файл уже был включён, он не подключится снова)
