/* Firmware entry: 0x480c3f56 */

void FUN_ram_480c3f56(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((int)param_1 + 0x155) = 0;
  *(undefined1 *)((int)param_1 + 0x156) = 0;
  iVar5 = *param_1;
  uVar2 = 6;
  if (param_3 != 3) {
    uVar2 = 0;
  }
  if (*(char *)(iVar5 + 0xb12) != '\0') {
    *(undefined1 *)(iVar5 + 0xb16) = uVar2;
    *(undefined2 *)(iVar5 + 0xb12) = 0;
    *(char *)(iVar5 + 0xb15) = (char)param_3;
    if ((*(byte *)(iVar5 + 0xaf0) < 8) &&
       (*(int *)(iVar5 + 0xaf8) != 0 || *(int *)(iVar5 + 0xafc) != 0)) {
      iVar6 = (uint)*(byte *)(iVar5 + 0xaf0) * 0x120;
      iVar4 = iVar5 + iVar6;
      if ((*(char *)(iVar4 + 0x70d6) != '\0') &&
         ((((*(int *)(iVar4 + 0x70c8) == *(int *)(iVar5 + 0xaf8) &&
            (*(int *)(iVar4 + 0x70cc) == *(int *)(iVar5 + 0xafc))) && (param_3 != 0)) &&
          (*(char *)(iVar4 + 0x70d8) == '\0')))) {
        iVar6 = iVar6 + 0x3678 + iVar5 + 0x3a40;
        iVar7 = *(int *)(iVar6 + 0x30);
        iVar8 = *(int *)(iVar6 + 0x34);
        *(char *)(iVar4 + 0x70d9) = (char)param_3;
        *(undefined1 *)(iVar4 + 0x70d7) = 0;
        *(undefined1 *)(iVar4 + 0x70d8) = 1;
        if ((iVar7 != 0 || iVar8 != 0) && (uVar3 = (uint)*(byte *)(iVar6 + 0x29), uVar3 != 0xff)) {
          cVar1 = *(char *)(iVar6 + 0x28);
          iVar4 = 2;
          if (cVar1 == '\x02') {
            iVar4 = 1;
          }
          else if ((cVar1 != '\x04') && (iVar4 = 0, cVar1 != '\x01')) goto LAB_ram_480c3f86;
          if (uVar3 < 0x18) {
            if (uVar3 < 0x10) {
              iVar4 = uVar3 * 0xe8 + iVar4 * 0x1228;
            }
            else {
              iVar4 = (uVar3 - 0x10) * 0x120;
              iVar6 = iVar5 + iVar4;
              if ((*(char *)(iVar6 + 0x70d6) == '\0') || (*(char *)(iVar6 + 0x70b8) != cVar1))
              goto LAB_ram_480c3f86;
              iVar4 = iVar4 + 14000;
            }
            iVar4 = iVar4 + iVar5 + 0x3a40;
            if (((*(int *)(iVar4 + 0xd8) == iVar7) && (*(int *)(iVar4 + 0xdc) == iVar8)) &&
               (*(char *)(iVar4 + 0xe6) == '\x01')) {
              FUN_ram_4804691a();
            }
          }
        }
      }
    }
  }
LAB_ram_480c3f86:
  iVar5 = param_1[0x23];
  FUN_ram_48025ba6();
  if (iVar5 == param_1[7]) {
    *(undefined1 *)((int)param_1 + 0x7a) = 1;
    if (*(char *)((int)param_1 + 0x79) == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      *(undefined1 *)((int)param_1 + 0x17) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      *(undefined1 *)((int)param_1 + 0x1f) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)((int)param_1 + 0x21) = 0;
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      *(undefined1 *)((int)param_1 + 0x23) = 0;
      *(undefined2 *)(param_1 + 9) = 0;
    }
    else {
      if ((param_2 == 0) && (*(undefined1 *)((int)param_1 + 0x7b) = 1, param_1[8] == param_1[10])) {
        *(undefined1 *)((int)param_1 + 0x7e) = 1;
        *(bool *)((int)param_1 + 0x7d) = (char)param_1[5] != '\x05';
      }
      if ((((char)param_1[5] != '\0') && (param_1[7] != 0)) &&
         ((*(char *)((int)param_1 + 0x7b) != '\0' || (param_1[8] != param_1[10])))) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)((int)param_1 + 0x16) = 0;
        *(undefined1 *)((int)param_1 + 0x17) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)((int)param_1 + 0x19) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        *(undefined1 *)((int)param_1 + 0x1e) = 0;
        *(undefined1 *)((int)param_1 + 0x1f) = 0;
        *(undefined1 *)(param_1 + 8) = 0;
        *(undefined1 *)((int)param_1 + 0x21) = 0;
        *(undefined1 *)((int)param_1 + 0x22) = 0;
        *(undefined1 *)((int)param_1 + 0x23) = 0;
        *(undefined2 *)(param_1 + 9) = 0;
        *(undefined1 *)((int)param_1 + 0x79) = 0;
        *(undefined2 *)((int)param_1 + 0x7a) = 0;
      }
    }
  }
  FUN_ram_480599fe(*param_1,0);
  return;
}


