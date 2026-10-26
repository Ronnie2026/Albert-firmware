/* Firmware entry: 0x4800031a */

void FUN_ram_4800031a(undefined4 param_1,void *param_2,undefined4 param_3)

{
  size_t __n;
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  while( true ) {
    __n = FUN_ram_48000600(param_3,8);
    memset(param_2,0,__n);
    iVar1 = FUN_ram_48000464(param_1,param_2,param_3,&LAB_ram_48000686);
    if (iVar1 != 0x1606) break;
    FUN_ram_4ff3c2b6(1);
  }
  return;
}


