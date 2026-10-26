/* Firmware entry: 0x48033124 */

void FUN_ram_48033124(undefined4 param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
  piVar2 = (int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
  if (iVar3 == 0) {
    FUN_ram_4817b062(0,0,param_1,0);
    return;
  }
  iVar8 = 0;
  piVar7 = piVar2;
  do {
    if (*piVar7 == 6) {
      pbVar1 = (byte *)piVar7[1];
      pbVar4 = (byte *)0x481cb4a8;
      uVar5 = 0x43;
      while( true ) {
        uVar6 = (uint)*pbVar1;
        pbVar4 = pbVar4 + 1;
        if ((uVar6 - 0x41 & 0xff) < 0x1a) {
          uVar6 = uVar6 + 0x20;
        }
        if ((uVar5 - 0x41 & 0xff) < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        if (uVar5 != uVar6) break;
        pbVar1 = pbVar1 + 1;
        if (pbVar4 == (byte *)0x481cb4ae) {
          FUN_ram_4817b062(piVar2[iVar8 * 4 + 3],piVar2[iVar8 * 4 + 2],param_1,0);
          return;
        }
        uVar5 = (uint)*pbVar4;
      }
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 4;
    if (iVar8 == iVar3) {
      FUN_ram_4817b062(0,0,param_1,0);
      return;
    }
  } while( true );
}


