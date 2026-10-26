/* Firmware entry: 0x4818b096 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4818b096(void *param_1,void *param_2,size_t param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((_DAT_ram_5009301c & 0x1e0) == 0x60) && (-1 < (int)(_DAT_ram_5009301c << 2))) {
    memset(param_1,0,param_3);
    memset(param_2,0,param_3);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  FUN_ram_4ff45158(param_1,0x50093130,param_3);
  FUN_ram_4ff45158(param_2,0x50093160,param_3);
  return 0;
}


