/* Firmware entry: 0x48131bda */

void FUN_ram_48131bda(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  param_2 = param_2 & 0xffff;
  if (iVar1 == 0x50121000) {
    param_2 = param_2 << 3;
  }
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xffff00ff | (param_2 & 0xff) << 8;
  return;
}


