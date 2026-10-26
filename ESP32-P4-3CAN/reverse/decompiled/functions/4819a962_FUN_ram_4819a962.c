/* Firmware entry: 0x4819a962 */

uint FUN_ram_4819a962(undefined4 param_1,code *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = 0;
  do {
    iVar1 = param_3[2];
    iVar4 = param_3[1];
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      if ((1 < *(ushort *)(iVar1 + 0xc)) && (*(short *)(iVar1 + 0xe) != -1)) {
        uVar2 = (*param_2)(param_1,iVar1);
        uVar3 = uVar3 | uVar2;
      }
      iVar1 = iVar1 + 0x68;
    }
    param_3 = (int *)*param_3;
  } while (param_3 != (int *)0x0);
  return uVar3;
}


