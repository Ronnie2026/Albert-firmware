/* Firmware entry: 0x4802b0d6 */

uint FUN_ram_4802b0d6(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = param_2[0xf];
  if ((char)param_1[0xf] < '\0') {
    if ((-1 < (char)bVar1) && (*(int *)param_2 == 0)) {
      if ((param_1[0xf] & 0x7f) == 0) {
        return 0;
      }
LAB_ram_4802b10a:
      return (uint)*param_1;
    }
  }
  else {
    if (*(byte **)param_1 == (byte *)0x0) {
      if ((char)bVar1 < '\0') {
        if ((param_2[0xf] & 0x7f) != 0) goto LAB_ram_4802b11c;
      }
      else if ((*(byte **)param_2 != (byte *)0x0) &&
              (pbVar2 = param_2 + 8, param_2 = *(byte **)param_2, *(int *)pbVar2 != 0)) {
LAB_ram_4802b11c:
        return -(uint)*param_2;
      }
      return 0;
    }
    if ((-1 < (char)bVar1) && (*(int *)param_2 == 0)) {
      pbVar2 = param_1 + 8;
      param_1 = *(byte **)param_1;
      if (*(int *)pbVar2 == 0) {
        return 0;
      }
      goto LAB_ram_4802b10a;
    }
  }
  uVar3 = FUN_ram_4ff453ae();
  return uVar3;
}


