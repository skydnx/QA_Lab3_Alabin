#ifndef AUDIOFILE_H  // Проверяем, не подключён ли уже этот файл
#define AUDIOFILE_H  // Определяем AUDIOFILE_H, чтобы предотвратить повторное включение заголовочного файла

#include "MediaFile.h"  // Подключаем базовый класс MediaFile

/**
 * @brief Класс аудиофайла.
 *
 * Этот класс наследуется от `MediaFile` и добавляет свойство битрейта.
 */
class AudioFile : public MediaFile {  // Класс AudioFile наследуется от MediaFile
public:
    int bitrate;  ///< Битрейт аудиофайла (измеряется в килобитах в секунду, kbps)

    /**
     * @brief Конструктор класса AudioFile.
     * @param n Название файла
     * @param d Длительность в секундах
     * @param b Битрейт (в kbps)
     *
     * Конструктор вызывает конструктор родительского класса `MediaFile`
     * и добавляет поле `bitrate`.
     */
    AudioFile(string n, int d, int b) : MediaFile(n, d), bitrate(b) {}

    /**
     * @brief Выводит информацию об аудиофайле.
     *
     * Этот метод переопределяет `info()` из `MediaFile`,
     * добавляя вывод битрейта.
     */
    void info() override {  // Переопределяем виртуальный метод info()
        cout << "Аудио: " << name << ", Длительность: " << duration
            << " сек, Битрейт: " << bitrate << "kbps" << endl;
    }
};

#endif // Завершаем условную компиляцию (если файл уже был включён, он не подключится снова)
