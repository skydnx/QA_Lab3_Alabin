#ifndef EDITEDVIDEO_H  // Проверяем, не подключён ли уже этот файл
#define EDITEDVIDEO_H  // Определяем EDITEDVIDEO_H, чтобы предотвратить повторное включение заголовочного файла

#include "VideoFile.h"  // Подключаем базовый класс VideoFile

/**
 * @brief Класс отредактированного видео.
 *
 * Этот класс наследуется от `VideoFile` и добавляет количество эффектов.
 */
class EditedVideo : public VideoFile {  // Класс EditedVideo наследуется от VideoFile
public:
    int effectsCount;  ///< Количество эффектов, применённых к видео

    /**
     * @brief Конструктор класса EditedVideo.
     * @param n Название файла
     * @param d Длительность в секундах
     * @param res Разрешение видео (в пикселях)
     * @param effects Количество применённых эффектов
     *
     * Конструктор вызывает конструктор родительского класса `VideoFile`
     * и добавляет поле `effectsCount`.
     */
    EditedVideo(string n, int d, int res, int effects)
        : VideoFile(n, d, res), effectsCount(effects) {}

    /**
     * @brief Выводит информацию об отредактированном видео.
     *
     * Этот метод переопределяет `info()` из `VideoFile`,
     * добавляя информацию о количестве эффектов.
     */
    void info() override {  // Переопределяем виртуальный метод info()
        cout << "Отредактированное видео: " << name << ", Длительность: " << duration
            << " сек, Разрешение: " << resolution << "p, Эффектов: " << effectsCount << endl;
    }
};

#endif // Завершаем условную компиляцию (если файл уже был включён, он не подключится снова)
