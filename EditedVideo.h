#ifndef EDITEDVIDEO_H  // ���������, �� ��������� �� ��� ���� ����
#define EDITEDVIDEO_H  // ���������� EDITEDVIDEO_H, ����� ������������� ��������� ��������� ������������� �����

#include "VideoFile.h"  // ���������� ������� ����� VideoFile

/**
 * @brief ����� ������������������ �����.
 *
 * ���� ����� ����������� �� `VideoFile` � ��������� ���������� ��������.
 */
class EditedVideo : public VideoFile {  // ����� EditedVideo ����������� �� VideoFile
public:
    int effectsCount;  ///< ���������� ��������, ���������� � �����

    /**
     * @brief ����������� ������ EditedVideo.
     * @param n �������� �����
     * @param d ������������ � ��������
     * @param res ���������� ����� (� ��������)
     * @param effects ���������� ���������� ��������
     *
     * ����������� �������� ����������� ������������� ������ `VideoFile`
     * � ��������� ���� `effectsCount`.
     */
    EditedVideo(string n, int d, int res, int effects)
        : VideoFile(n, d, res), effectsCount(effects) {}

    /**
     * @brief ������� ���������� �� ����������������� �����.
     *
     * ���� ����� �������������� `info()` �� `VideoFile`,
     * �������� ���������� � ���������� ��������.
     */
    void info() override {  // �������������� ����������� ����� info()
        cout << "����������������� �����: " << name << ", ������������: " << duration
            << " ���, ����������: " << resolution << "p, ��������: " << effectsCount << endl;
    }
};

#endif // ��������� �������� ���������� (���� ���� ��� ��� �������, �� �� ����������� �����)
