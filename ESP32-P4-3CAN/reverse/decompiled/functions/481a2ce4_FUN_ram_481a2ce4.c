/* Firmware entry: 0x481a2ce4 */

byte * FUN_ram_481a2ce4(int param_1,byte *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = (uint)*param_2;
  bVar1 = uVar7 == 0x5e;
  if (bVar1) {
    uVar7 = (uint)param_2[1];
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  iVar5 = 0;
  do {
    *(bool *)(param_1 + iVar5) = bVar1;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  if (uVar7 == 0) {
    return param_2 + -1;
  }
LAB_ram_481a2d1e:
  do {
    *(bool *)(param_1 + uVar7) = !bVar1;
    while( true ) {
      uVar6 = (uint)*param_2;
      pbVar3 = param_2 + 1;
      if (uVar6 != 0x2d) break;
      uVar6 = (uint)param_2[1];
      if ((uVar6 == 0x5d) || ((int)uVar6 < (int)uVar7)) {
        param_2 = pbVar3;
        uVar7 = 0x2d;
        goto LAB_ram_481a2d1e;
      }
      param_2 = param_2 + 2;
      uVar4 = uVar7;
      do {
        uVar4 = uVar4 + 1;
        *(bool *)(param_1 + uVar4) = !bVar1;
      } while ((int)uVar4 < (int)uVar6);
      iVar5 = 0;
      if ((int)uVar7 < (int)uVar6) {
        iVar5 = (uVar6 - uVar7) + -1;
      }
      uVar7 = uVar7 + 1 + iVar5;
    }
    pbVar2 = pbVar3;
    if ((uVar6 == 0x5d) || (pbVar2 = param_2, param_2 = pbVar3, uVar7 = uVar6, uVar6 == 0)) {
      return pbVar2;
    }
  } while( true );
}


