#ifndef VIDEOFILE_H  // Проверяем, не подключён ли уже этот файл
#define VIDEOFILE_H  // Определяем VIDEOFILE_H, чтобы предотвратить повторное включение заголовочного файла

#include "MediaFile.h"  // Подключаем базовый класс MediaFile

/**
 * @brief Класс видеофайла.
 *
 * Этот класс наследуется от `MediaFile` и добавляет свойство разрешения видео.
 */
class VideoFile : public MediaFile {  // Класс VideoFile наследуется от MediaFile
public:
    int resolution;  ///< Разрешение видео в пикселях (например, 1080p)

    /**
     * @brief Конструктор класса VideoFile.
     * @param n Название файла
     * @param d Длительность в секундах
     * @param res Разрешение видео (в пикселях)
     *
     * Конструктор вызывает конструктор родительского класса `MediaFile`
     * и добавляет поле разрешения `resolution`.
     */
    VideoFile(string n, int d, int res) : MediaFile(n, d), resolution(res) {}

    /**
     * @brief Выводит информацию о видеофайле.
     *
     * Этот метод переопределяет `info()` из `MediaFile`,
     * добавляя вывод разрешения видео.
     */
    void info() override {  // Переопределяем виртуальный метод info()
        cout << "Видео: " << name << ", Длительность: " << duration
            << " сек, Разрешение: " << resolution << "p" << endl;
    }
};

#endif // Завершаем условную компиляцию (если файл уже был включён, он не подключится снова)
