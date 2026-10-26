/* Firmware entry: 0x480484fc */

uint FUN_ram_480484fc(int param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_2 == '\x01') && (*(char *)(param_1 + 5) != '\0')) {
    bVar1 = param_2[2];
    if ((bVar1 == *(byte *)(param_1 + 0xb)) &&
       (uVar5 = (uint)(byte)param_2[1], uVar5 == (*(char *)(param_1 + 10) == '\x01') + 1)) {
      if (param_3 == 0) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        *(int *)(param_1 + 0xc) = param_4 + 0xfa;
        *(undefined1 *)(param_1 + 7) = 1;
        *(undefined1 *)(param_1 + 0x38) = 6;
        uVar3 = 2;
        goto LAB_ram_48048516;
      }
      if (bVar1 < 3) {
        *(byte *)(param_1 + 0xb) = bVar1 + 1;
        *(int *)(param_1 + 0xc) = param_5 + 100;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 0;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        if (*(char *)(param_1 + 0x22) == '\0') {
          if (*(char *)(param_1 + 0x19) == '\0') {
            cVar2 = *(char *)(param_1 + 3);
            if (*(char *)(param_1 + 2) == '\0') goto LAB_ram_480485de;
            if (cVar2 == '\0') goto LAB_ram_480485bc;
            *(int *)(param_1 + 0x10) = param_4 + 300;
            *(undefined1 *)(param_1 + 6) = 1;
            *(undefined1 *)(param_1 + 9) = 1;
            *(undefined2 *)(param_1 + 0x20) = 300;
          }
          else {
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 9) = 0;
            *(undefined2 *)(param_1 + 0x20) = 0;
          }
        }
        else {
          if (*(char *)(param_1 + 0x19) == '\0') {
            cVar2 = *(char *)(param_1 + 3);
            if (*(char *)(param_1 + 2) == '\0') {
LAB_ram_480485de:
              if ((cVar2 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
                FUN_ram_48047e40(param_1,param_4,param_6);
                return 0;
              }
            }
            else if (cVar2 != '\0') {
              *(undefined1 *)(param_1 + 6) = 1;
              *(undefined1 *)(param_1 + 9) = 1;
              iVar4 = (param_6 % 0xb) * 100 + 2000;
              *(int *)(param_1 + 0x10) = param_4 + iVar4;
              *(short *)(param_1 + 0x20) = (short)iVar4;
              goto LAB_ram_48048512;
            }
          }
LAB_ram_480485bc:
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 9) = 0;
          *(undefined2 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
      }
    }
  }
LAB_ram_48048512:
  uVar3 = 0;
  uVar5 = 0;
LAB_ram_48048516:
  return uVar5 << 8 | uVar3;
}


