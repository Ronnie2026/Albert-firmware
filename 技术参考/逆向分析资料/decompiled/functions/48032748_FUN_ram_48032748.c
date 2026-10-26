/* Firmware entry: 0x48032748 */

int FUN_ram_48032748(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0 && param_3 == 0) {
    return 0;
  }
  if (((param_4 != 0) && (param_5 < 0xce)) &&
     (iVar1 = param_5 * 0x48 + param_1, (*(ushort *)(iVar1 + 0x56) & 1) != 0)) {
    iVar3 = *(int *)(iVar1 + 0x10);
    if ((((iVar3 != 0 || *(int *)(iVar1 + 0x14) != 0) &&
         (uVar2 = (uint)*(ushort *)(iVar1 + 0x4c), uVar2 < 0x1ff)) &&
        ((param_2 == iVar3 &&
         ((param_3 == *(int *)(iVar1 + 0x14) && (param_4 == (iVar3 << 9 | uVar2 + 1))))))) &&
       (param_5 == uVar2)) {
      return param_1 + param_5 * 0x48 + 0x10;
    }
  }
  return 0;
}


