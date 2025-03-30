#include "EditedVideo.h"  // Подключаем заголовочный файл класса EditedVideo
#include "VoiceOver.h"    // Подключаем заголовочный файл класса VoiceOver

int main() {
    setlocale(LC_ALL, "Russian");  // Устанавливаем локаль для корректного отображения русских символов в консоли

    // Создаём объект класса VideoFile с названием "Movie.mp4", длительностью 120 секунд и разрешением 1080p
    VideoFile video("Movie.mp4", 120, 1080);

    // Создаём объект класса EditedVideo с названием "EditedMovie.mp4", 
    // длительностью 90 секунд, разрешением 1080p и 5 эффектами
    EditedVideo editedVideo("EditedMovie.mp4", 90, 1080, 5);

    // Создаём объект класса VoiceOver с названием "Narration.mp3", 
    // длительностью 60 секунд, битрейтом 320 и диктором "Alabin Nikita"
    VoiceOver voice("Narration.mp3", 60, 320, "Alabin Nikita");

    // Вызываем метод info() для каждого объекта, чтобы вывести их данные в консоль
    video.info();
    editedVideo.info();
    voice.info();

    return 0;  // Завершаем программу, возвращая 0 (означает успешное выполнение)
}
