/* Firmware entry: 0x4818171c */

undefined4 FUN_ram_4818171c(void *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < (uint)((param_4 & 3) != 0) + (param_4 >> 2)) {
    return 0xfffffff8;
  }
  if ((param_1 != (void *)0x0) && (memset(param_1,0,param_2 << 2), param_4 != 0)) {
    uVar2 = 0;
    do {
      puVar1 = (uint *)((uVar2 & 0xfffffffc) + (int)param_1);
      *puVar1 = *puVar1 | (uint)*(byte *)(param_3 + uVar2) << ((uVar2 & 3) << 3);
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  return 0;
}


