/* Firmware entry: 0x48170976 */

int FUN_ram_48170976(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xb4) == 0x16) {
    pcVar3 = *(char **)(param_1 + 0xb0);
    uVar6 = uVar5 - 4;
    uVar2 = (undefined1)(uVar6 >> 8);
    cVar4 = (char)(uVar6 >> 0x10);
    if (*pcVar3 == '\0') {
      if (uVar5 < 0x1001) {
        pcVar3[1] = cVar4;
        *(undefined1 *)(*(int *)(param_1 + 0xb0) + 2) = uVar2;
        *(char *)(*(int *)(param_1 + 0xb0) + 3) = (char)uVar6;
        iVar1 = FUN_ram_48170748(param_1,param_3);
        return iVar1;
      }
    }
    else if ((*(int *)(param_1 + 0x40) != 0) && (uVar5 < 0x1001)) {
      pcVar3[1] = cVar4;
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 2) = uVar2;
      iVar1 = *(int *)(param_1 + 0xb0);
      *(char *)(iVar1 + 3) = (char)uVar6;
      if ((param_2 != 0) &&
         (pcVar7 = *(code **)(*(int *)(param_1 + 0x40) + 0x14),
         iVar1 = (*pcVar7)(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                           uVar6 >> 8,iVar1,pcVar7), iVar1 != 0)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      goto LAB_ram_481709a0;
    }
  }
  else if (((*(int *)(param_1 + 0xb4) == 0x14) && (*(int *)(param_1 + 0x40) != 0)) &&
          (uVar5 < 0x1001)) {
LAB_ram_481709a0:
    iVar1 = FUN_ram_48170748(param_1,param_3);
    return iVar1;
  }
  return -0x6c00;
}


