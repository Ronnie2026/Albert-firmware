/* Firmware entry: 0x480646a8 */

undefined4 FUN_ram_480646a8(int param_1,byte *param_2,int param_3,byte *param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != param_1) {
    return 0;
  }
  if (param_3 != 0) {
    pbVar2 = param_2 + param_3;
    do {
      uVar3 = (uint)*param_2;
      param_2 = param_2 + 1;
      if ((uVar3 - 0x41 & 0xff) < 0x1a) {
        uVar3 = uVar3 + 0x20;
      }
      uVar1 = (uint)*param_4;
      param_4 = param_4 + 1;
      if ((uVar1 - 0x41 & 0xff) < 0x1a) {
        uVar1 = uVar1 + 0x20;
      }
      if (uVar1 != uVar3) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    } while (pbVar2 != param_2);
  }
  return 1;
}


