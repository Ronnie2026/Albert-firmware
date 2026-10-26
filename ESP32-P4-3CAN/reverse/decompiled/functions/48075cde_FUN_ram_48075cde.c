/* Firmware entry: 0x48075cde */

undefined4 FUN_ram_48075cde(byte *param_1)

{
  byte bVar1;
  size_t sVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar1 = *param_1;
  if ((bVar1 != 0) && (sVar2 = strlen((char *)param_1), sVar2 < 0x41)) {
    while( true ) {
      param_1 = param_1 + 1;
      if ((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) &&
         (((9 < (byte)(bVar1 - 0x30) && (1 < (byte)(bVar1 - 0x2d))) && (bVar1 != 0x5f)))) break;
      bVar1 = *param_1;
      if (bVar1 == 0) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


