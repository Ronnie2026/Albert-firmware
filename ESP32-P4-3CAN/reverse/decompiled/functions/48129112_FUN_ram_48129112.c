/* Firmware entry: 0x48129112 */

int FUN_ram_48129112(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)*param_1;
  iVar2 = 0;
  pbVar4 = param_1 + 4;
  iVar1 = -0x30;
  if ((uVar3 - 0x30 & 0xff) < 10) goto LAB_ram_4812917c;
  while( true ) {
    iVar1 = iVar2 + -0x37;
    if ((uVar3 - 0x41 & 0xff) < 6) goto LAB_ram_4812917c;
    if (5 < (uVar3 - 0x61 & 0xff)) break;
    iVar2 = uVar3 + iVar2 + -0x57;
    while( true ) {
      param_1 = param_1 + 1;
      if (param_1 == pbVar4) {
        return iVar2;
      }
      uVar3 = (uint)*param_1;
      iVar2 = iVar2 * 0x10;
      iVar1 = iVar2 + -0x30;
      if (9 < (uVar3 - 0x30 & 0xff)) break;
LAB_ram_4812917c:
      iVar2 = iVar1 + uVar3;
    }
  }
  return 0;
}


