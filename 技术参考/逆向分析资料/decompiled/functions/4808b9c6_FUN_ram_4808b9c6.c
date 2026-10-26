/* Firmware entry: 0x4808b9c6 */

byte FUN_ram_4808b9c6(byte *param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar5 = *(byte *)(param_2 + 2);
  if (bVar5 < 2) {
    iVar7 = *param_2;
    iVar4 = param_2[1];
    if (iVar7 == 0xd) {
      iVar4 = FUN_ram_4ff4511a(iVar4,"/generate_204");
    }
    else if (iVar7 == 8) {
      iVar4 = FUN_ram_4ff4511a(iVar4,"/gen_204");
    }
    else {
      if (iVar7 != 0x14) goto LAB_ram_4808ba10;
      iVar4 = FUN_ram_4ff4511a(iVar4,"/hotspot-detect.html");
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
LAB_ram_4808ba10:
  iVar4 = FUN_ram_4808b432(param_2[3],param_2[4]);
  if ((iVar4 == 0) && (iVar4 = FUN_ram_4808b604(param_2[3],param_2[4]), iVar4 == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0;
    if (param_2[7] != 0) {
      if (bVar5 < 2) {
        if ((*param_2 != 1) || (bVar3 = 1, *(char *)param_2[1] != '/')) goto LAB_ram_4808ba78;
      }
      else {
        if ((param_2[5] == 0) ||
           (iVar4 = FUN_ram_4808b750(param_2[5],param_2[6],param_2[3],param_2[4]), iVar4 != 0)) {
          if (((bVar5 == 2) && (*param_2 == 0xb)) &&
             (iVar4 = FUN_ram_4ff4511a(param_2[1],"/auth/login"), iVar4 == 0)) {
            return 1;
          }
LAB_ram_4808ba78:
          uVar10 = FUN_ram_4808acac();
          pbVar6 = (byte *)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 == 0x20) {
            pbVar9 = param_1 + 0xc0;
            pbVar2 = param_1;
            do {
              if ((pbVar2[0x2c] != 0) &&
                 ((0x240c83ff < (uint)(param_3 - *(int *)(pbVar2 + 0x24)) ||
                  (0xa4cb7ff < (uint)(param_3 - *(int *)(pbVar2 + 0x28)))))) {
                memset(pbVar2,0,0x2d);
              }
              pbVar2 = pbVar2 + 0x30;
            } while (pbVar9 != pbVar2);
            do {
              if (param_1[0x2c] != 0) {
                bVar5 = 0;
                pbVar2 = param_1;
                pbVar8 = pbVar6;
                do {
                  bVar3 = *pbVar8;
                  bVar1 = *pbVar2;
                  pbVar8 = pbVar8 + 1;
                  pbVar2 = pbVar2 + 1;
                  bVar5 = bVar5 | bVar3 ^ bVar1;
                } while (pbVar8 != pbVar6 + 0x20);
                if (bVar5 == 0) {
                  *(int *)(param_1 + 0x28) = param_3;
                  return param_1[0x2c];
                }
              }
              param_1 = param_1 + 0x30;
            } while (pbVar9 != param_1);
          }
          return 0;
        }
        bVar3 = 0;
      }
    }
  }
  return bVar3;
}


