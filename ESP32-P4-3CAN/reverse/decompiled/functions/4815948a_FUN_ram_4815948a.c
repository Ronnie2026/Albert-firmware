/* Firmware entry: 0x4815948a */

undefined4 FUN_ram_4815948a(uint *param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  if ((uVar1 & 0xe0) == 0x20) {
    return 1;
  }
  if ((uVar1 & 0xc0ff) == 0x80fe) {
    return 2;
  }
  if ((uVar1 & 0xc0ff) == 0xc0fe) {
    return 3;
  }
  if ((uVar1 & 0xfe) != 0xfc) {
    if (((uVar1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0xffff0000)) {
      return 5;
    }
    return 0;
  }
  return 4;
}


