/* Firmware entry: 0x48049a54 */

undefined4 FUN_ram_48049a54(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (byte *)0x0) && ((param_2 == 3 || (param_2 == 8)))) {
    bVar1 = param_1[1];
    uVar3 = (uint)bVar1;
    if (*param_1 == ((&DAT_ram_48222ca8)[bVar1 >> 4 & 7] ^ (&DAT_ram_48222cb0)[uVar3 & 0xf])) {
      bVar2 = 1;
      if ((param_3 - 1U & 0xff) < 2) {
        uVar3 = uVar3 + 1 & 0xf;
        if (param_3 == 2) {
          bVar4 = 0xef;
          bVar5 = 0x20;
          bVar2 = 0;
        }
        else {
          bVar4 = 0;
          bVar5 = 0;
        }
      }
      else {
        if (param_3 != 4) {
          return 0;
        }
        uVar3 = uVar3 + 1 & 0xf;
        bVar4 = 0xf1;
        bVar5 = 0x40;
        bVar2 = 0;
      }
      *param_1 = bVar4 ^ (&DAT_ram_48222cb0)[uVar3];
      param_1[1] = bVar1 & 0x80 | bVar5 | (byte)uVar3;
      param_1[2] = bVar2 | param_1[2] & 0xfc;
      return 1;
    }
  }
  return 0;
}


