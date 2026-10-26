/* Firmware entry: 0x4802ea64 */

int FUN_ram_4802ea64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined1 *param_5,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_5 = 0;
  *param_6 = 0;
  while (fence(), *(char *)(param_1 + 0x3ff9) == '\0') {
    iVar1 = *(int *)(param_1 + 0x2ecc);
    iVar2 = FUN_ram_48025ba6();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 1) {
LAB_ram_4802eb22:
      *param_5 = 1;
      return -1;
    }
    if (1000 < iVar1) {
      iVar1 = 1000;
    }
    iVar1 = FUN_ram_48166f06(param_2,iVar1);
    if (iVar1 != 0) {
      return -1;
    }
    iVar1 = FUN_ram_48166f16(param_2,param_3,param_4);
    fence();
    if (*(char *)(param_1 + 0x3ff9) != '\0') break;
    iVar3 = *(int *)(param_1 + 0x2ecc);
    iVar2 = FUN_ram_48025ba6();
    if (iVar3 - iVar2 < 1) goto LAB_ram_4802eb22;
    if (iVar1 != -0x7007) {
      return iVar1;
    }
  }
  *param_6 = 1;
  return -1;
}


