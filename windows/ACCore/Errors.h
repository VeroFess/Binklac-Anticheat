#pragma once

#define BINKLAC_ANTICHEAT_NOERROR                           0x00000000
//===================================================================================================================================================
//0xBACE0001 - 0xBACE00FF: δ֪����, ��ͬ�ı�������˲�ͬ��λ�ã���Щ�������ֻӦ�ó�����catch��
#define BINKLAC_ANTICHEAT_ERROR_UNKONW                      0xBACE0001

//===================================================================================================================================================
//0xB0E00100 - 0xB0E001FF: �����ڲ����󣬳���ʱӦ����BUG

//δ֪�����ڲ����������������
#define BINKLAC_ANTICHEAT_INTERNAL_ERROR                    0xBACE0100
//���߳�������޸��������̵߳ľֲ�����
//�������ͬʱ������ .asm �ļ���
#define THREAD_CONFLICT                                     0xBACE0101
//NT API ��ֱ�� SysCall ʧ��
#define NT_API_INVOKE_FAILURE                               0xBACE0102
//�ڴ����ʧ��
#define MEMORY_ALLOCATION_FAILED                            0xBACE0103

//===================================================================================================================================================
//0xB0E00200 - 0xB0E002FF: ������쳣, ����ʱΪĳһ���Ҽ��δͨ��

//δ֪������쳣�������������
#define UNKONW_ANTICHEAT_ERROR                              0xBACE0200
//�̵߳�����쳣��ͨ��������ע��ʱ
#define UNEXPECTED_THREAD_START_ADDRESS                     0xBACE0201
//�߳����ҳ�����Ա��޸��ˣ�ͨ��������ע���Hookʱ
#define MODIFIED_THREAD_START_PAGE_ATTRIBUTE                0xBACE0202
//�̵߳����ҳ�ǲ���ִ�еģ���Ӧ�ó����������
#define NON_EXECUTABLE_STARTING_PAGE                        0xBACE0203
//�̵߳����ҳ�Ƿ�IMAGEҳ��һ����Զ��ע��
#define STARTING_PAGE_ATTRIBUTE_IS_NOT_IMAGE                0xBACE0204
//�̵߳����ҳ��IMAGE�����ǲ�֪����ӳ�������ĸ�DLL��
#define UNABLE_TO_VERIFY_STARTING_PAGE_INFORMATION          0xBACE0205
//���ص��ڴ��е��ļ�δ������֤
#define UNABLE_TO_VERIFY_LOADED_FILE                        0xBACE0206
//���ص��ڴ��еĶ�̬��δ������֤
#define UNABLE_TO_VERIFY_LOADED_LIBRARY                     0xBACE0207