/* Firmware entry: 0x4804a128 */

byte FUN_ram_4804a128(char *param_1)

{
  byte bVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[6] != '\0') {
    return 0;
  }
  bVar1 = 0;
  if ((((((*param_1 != '\0') && (param_1[9] != '\0')) && (param_1[10] != '\0')) &&
       (((param_1[0xc] == '\0' && (param_1[0xd] != '\0')) &&
        ((param_1[0xe] == '\0' && ((param_1[0xf] == '\0' && (param_1[0x10] != '\0')))))))) &&
      (param_1[0xac] == '\0')) &&
     (((1 < (byte)(param_1[0xa0] - 3U) && (param_1[0xa2] != '\x04')) && (param_1[0xa2] != '\t')))) {
    if (param_1[0xb9] != '\0') {
      return 0;
    }
    uVar2 = (uint)(byte)param_1[0x134];
    bVar1 = 0;
    if (param_1[0x128] != '\0') {
      if (8 < uVar2) {
        return 0;
      }
      if ((0x111U >> (uVar2 & 0x1f) & 1) == 0) {
        return 0;
      }
      uVar2 = (uint)(byte)param_1[0x107];
    }
    if (((uVar2 < 9) && ((0x111U >> (uVar2 & 0x1f) & 1) != 0)) &&
       (bVar1 = param_1[0xa5], param_1[0xa1] == '\x04')) {
      return bVar1 ^ 1;
    }
  }
  return bVar1;
}


