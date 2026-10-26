/* Firmware entry: 0x4817fe72 */

undefined4 FUN_ram_4817fe72(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == param_2) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  if (*(ushort *)((int)param_2 + 6) == 0) {
    if (uVar3 != 0) {
      *(undefined2 *)(param_1 + 1) = 1;
      memset((void *)*param_1,0,uVar3 << 2);
    }
  }
  else {
    iVar4 = *(ushort *)((int)param_2 + 6) - 1;
    if (iVar4 != 0) {
      do {
        if (*(int *)(iVar4 * 4 + *param_2) != 0) {
          uVar1 = iVar4 + 1;
          *(short *)(param_1 + 1) = (short)param_2[1];
          uVar2 = uVar1;
          if (uVar1 <= uVar3) goto LAB_ram_4817ff04;
          goto LAB_ram_4817feb4;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = 1;
    uVar1 = 1;
    *(short *)(param_1 + 1) = (short)param_2[1];
    if (uVar3 == 0) {
LAB_ram_4817feb4:
      iVar4 = FUN_ram_4817fbba(param_1,uVar2);
      if (iVar4 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xfffffff0;
      }
      iVar4 = uVar2 << 2;
    }
    else {
LAB_ram_4817ff04:
      iVar4 = uVar1 * 4;
      memset((void *)(*param_1 + iVar4),0,(uVar3 - uVar1) * 4);
    }
    FUN_ram_4ff45158(*param_1,*param_2,iVar4);
  }
  return 0;
}


