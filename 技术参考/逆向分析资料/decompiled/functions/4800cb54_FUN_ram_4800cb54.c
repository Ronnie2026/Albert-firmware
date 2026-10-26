/* Firmware entry: 0x4800cb54 */

undefined4 FUN_ram_4800cb54(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvVar1 = memset(param_2,0,0x58);
  *(undefined4 *)((int)pvVar1 + 4) = 0x2000;
  return 0;
}


