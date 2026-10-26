/* Firmware entry: 0x48003838 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48003838(void)

{
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = DAT_ram_481e444c;
  uStack_14 = DAT_ram_481e4450;
  FUN_ram_481320ec(&uStack_18);
  _DAT_ram_5011302c = 0x80000000;
  FUN_ram_48003406(DAT_ram_48235e48,0x500,0x50113024,0x80000000,&LAB_ram_4ff20fcc,0,auStack_1c);
  _DAT_ram_50113028 = _DAT_ram_50113028 | 0x80000000;
  return;
}


