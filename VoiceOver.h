#ifndef VOICEOVER_H  // ���������, �� ��������� �� ��� ���� ����
#define VOICEOVER_H  // ���������� VOICEOVER_H, ����� ������������� ��������� ��������� ������������� �����

#include "AudioFile.h"  // ���������� ������� ����� AudioFile

/**
 * @brief ����� ��������� �������.
 *
 * ���� ����� ����������� �� `AudioFile` � ��������� ��� �������.
 */
class VoiceOver : public AudioFile {  // ����� VoiceOver ����������� �� AudioFile
public:
    string speakerName;  ///< ��� �������, ����������� ��������� �������

    /**
     * @brief ����������� ������ VoiceOver.
     * @param n �������� �����
     * @param d ������������ � ��������
     * @param b ������� (� kbps)
     * @param speaker ��� �������
     *
     * ����������� �������� ����������� ������������� ������ `AudioFile`
     * � ��������� ���� `speakerName`.
     */
    VoiceOver(string n, int d, int b, string speaker)
        : AudioFile(n, d, b), speakerName(speaker) {}

    /**
     * @brief ������� ���������� � ��������� ������.
     *
     * ���� ����� �������������� `info()` �� `AudioFile`,
     * �������� ���������� � �������.
     */
    void info() override {  // �������������� ����������� ����� info()
        cout << "��������� ������: " << name << ", ������������: " << duration
            << " ���, �������: " << bitrate << "kbps, ������: " << speakerName << endl;
    }
};

#endif // ��������� �������� ���������� (���� ���� ��� ��� �������, �� �� ����������� �����)
