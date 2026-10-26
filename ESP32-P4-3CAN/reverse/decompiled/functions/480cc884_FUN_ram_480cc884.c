/* Firmware entry: 0x480cc884 */

void FUN_ram_480cc884(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_f4 [11];
  byte bStack_e9;
  char cStack_b0;
  char cStack_ad;
  char cStack_ac;
  char cStack_84;
  char cStack_79;
  char cStack_58;
  int iStack_3c;
  uint uStack_38;
  char cStack_1c;
  char cStack_1b;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48053f2a(auStack_f4,param_1 + 0x574,param_2);
  if ((cStack_79 != '\0') && (*(char *)(*(int *)(param_1 + 0x58) + 0xac2) != '\0')) {
    *(byte *)(*(int *)(param_1 + 0x58) + 0xac6) = bStack_e9 ^ 1;
  }
  if ((cStack_1c != '\0') && (*(char *)(*(int *)(param_1 + 0x58) + 0xaea) != '\0')) {
    *(bool *)(*(int *)(param_1 + 0x58) + 0xaee) = 599 < uStack_38;
  }
  if ((((iStack_3c != *(int *)(param_1 + 0x528)) &&
       (*(int *)(param_1 + 0x528) = iStack_3c, cStack_b0 == '\0')) && (cStack_ad == '\0')) &&
     (cStack_1b == '\0')) {
    FUN_ram_4805c6b0(*(undefined4 *)(param_1 + 0x58),6,1,0);
  }
  if ((cStack_84 != '\0') && (iVar7 = *(int *)(param_1 + 0x58), *(char *)(iVar7 + 0xac2) != '\0')) {
    *(undefined1 *)(iVar7 + 0xac5) = 2;
    *(undefined2 *)(iVar7 + 0xac2) = 0;
    *(undefined1 *)(iVar7 + 0xac6) = 7;
    if ((*(byte *)(iVar7 + 0xaa0) < 8) &&
       (*(int *)(iVar7 + 0xaa8) != 0 || *(int *)(iVar7 + 0xaac) != 0)) {
      iVar8 = (uint)*(byte *)(iVar7 + 0xaa0) * 0x120;
      iVar6 = iVar7 + iVar8;
      if ((((*(char *)(iVar6 + 0x70d6) != '\0') &&
           (*(int *)(iVar6 + 0x70c8) == *(int *)(iVar7 + 0xaa8))) &&
          (*(int *)(iVar6 + 0x70cc) == *(int *)(iVar7 + 0xaac))) &&
         (*(char *)(iVar6 + 0x70d8) == '\0')) {
        *(undefined1 *)(iVar6 + 0x70d7) = 0;
        *(undefined2 *)(iVar7 + iVar8 + 0x70d8) = 0x201;
        iVar6 = iVar8 + 0x3678 + iVar7 + 0x3a40;
        if ((*(int *)(iVar6 + 0x30) != 0 || *(int *)(iVar6 + 0x34) != 0) &&
           (uVar4 = (uint)*(byte *)(iVar6 + 0x29), uVar4 != 0xff)) {
          cVar1 = *(char *)(iVar6 + 0x28);
          iVar8 = 2;
          if (cVar1 == '\x02') {
            iVar8 = 1;
          }
          else if ((cVar1 != '\x04') && (iVar8 = 0, cVar1 != '\x01')) goto LAB_ram_480cc8d8;
          if (uVar4 < 0x18) {
            if (uVar4 < 0x10) {
              iVar8 = uVar4 * 0xe8 + iVar8 * 0x1228;
            }
            else {
              iVar8 = (uVar4 - 0x10) * 0x120;
              iVar9 = iVar7 + iVar8;
              if ((*(char *)(iVar9 + 0x70d6) == '\0') || (*(char *)(iVar9 + 0x70b8) != cVar1))
              goto LAB_ram_480cc8d8;
              iVar8 = iVar8 + 14000;
            }
            iVar8 = iVar8 + iVar7 + 0x3a40;
            if (((*(int *)(iVar8 + 0xd8) == *(int *)(iVar6 + 0x30)) &&
                (*(int *)(iVar8 + 0xdc) == *(int *)(iVar6 + 0x34))) &&
               (*(char *)(iVar8 + 0xe6) == '\x01')) {
              FUN_ram_4804691a();
            }
          }
        }
      }
    }
  }
LAB_ram_480cc8d8:
  if (cStack_ac == '\0') {
    if (((cStack_b0 != '\x06') || (cStack_1c != '\0')) || (cStack_58 != '\0')) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = 7;
    uVar3 = 2;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = 6;
    uVar3 = 3;
  }
  FUN_ram_4805c6b0(uVar2,6,uVar3,uVar5);
  return;
}


