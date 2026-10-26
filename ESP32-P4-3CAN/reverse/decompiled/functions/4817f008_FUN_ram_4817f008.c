/* Firmware entry: 0x4817f008 */

undefined4
FUN_ram_4817f008(undefined4 param_1,uint param_2,uint param_3,byte *param_4,int param_5,
                byte *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 auStack_40 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 2) {
    if ((param_3 & 0xf) == 0) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          pbVar8 = param_6 + 0x10;
          iVar5 = param_5 + param_3;
          pbVar6 = pbVar8;
          while( true ) {
            FUN_ram_4ff45158(auStack_40,param_5,0x10);
            FUN_ram_4817ebf2(param_1,param_5,param_6);
            pbVar4 = param_4;
            do {
              bVar1 = *pbVar4;
              pbVar3 = param_6 + 1;
              pbVar4 = pbVar4 + 1;
              *param_6 = *param_6 ^ bVar1;
              param_6 = pbVar3;
            } while (pbVar3 != pbVar8);
            param_5 = param_5 + 0x10;
            FUN_ram_4ff45158(param_4,auStack_40,0x10);
            pbVar8 = pbVar8 + 0x10;
            if (param_5 == iVar5) break;
            param_6 = pbVar6;
            pbVar6 = pbVar6 + 0x10;
          }
        }
      }
      else {
        for (uVar7 = param_3; uVar7 != 0; uVar7 = uVar7 - 0x10) {
          pbVar6 = param_6 + (param_3 - uVar7);
          iVar5 = 0;
          do {
            pbVar8 = param_4 + iVar5;
            pbVar3 = (byte *)(((param_5 + param_3) - uVar7) + iVar5);
            pbVar4 = pbVar6 + iVar5;
            iVar5 = iVar5 + 1;
            *pbVar4 = *pbVar3 ^ *pbVar8;
          } while (iVar5 != 0x10);
          FUN_ram_4817ebf2(param_1,pbVar6,pbVar6);
          FUN_ram_4ff45158(param_4,pbVar6,0x10);
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffa2;
    }
    return uVar2;
  }
  return 0xffffffa4;
}


