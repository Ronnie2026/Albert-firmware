/* Firmware entry: 0x48185f60 */

int FUN_ram_48185f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,uint param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 auStack_cc [3];
  byte local_c0 [64];
  byte local_80 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4817697e();
  if (iVar3 == 0) {
    iVar3 = -0x2e80;
  }
  else {
    FUN_ram_481769e8(auStack_cc);
    iVar3 = FUN_ram_48176b18(auStack_cc,iVar3,1);
    if (iVar3 == 0) {
      uVar4 = FUN_ram_48176d4c(auStack_cc[0]);
      uStack_d0._0_2_ = 0;
      uStack_d0._2_1_ = 0;
      uStack_d0._3_1_ = 1;
      iVar3 = FUN_ram_48176d6c(auStack_cc,param_2,param_3);
      if (iVar3 == 0) {
        iVar5 = iVar3;
        if (param_7 != 0) {
          uStack_d4 = 1;
          do {
            iVar5 = FUN_ram_48176e96(auStack_cc,param_4,param_5);
            if ((((iVar5 != 0) || (iVar5 = FUN_ram_48176e96(auStack_cc,&uStack_d0,4), iVar5 != 0))
                || (iVar5 = FUN_ram_48176eac(auStack_cc,local_80), iVar5 != 0)) ||
               (iVar5 = FUN_ram_48176f38(auStack_cc), iVar5 != 0)) break;
            FUN_ram_4ff45158(local_c0,local_80,uVar4);
            if (uStack_d4 < param_6) {
              uVar2 = 1;
              do {
                iVar5 = FUN_ram_48176e96(auStack_cc,local_c0,uVar4);
                if (((iVar5 != 0) || (iVar5 = FUN_ram_48176eac(auStack_cc,local_c0), iVar5 != 0)) ||
                   (iVar5 = FUN_ram_48176f38(auStack_cc), iVar5 != 0)) goto LAB_ram_481860be;
                pbVar6 = local_c0;
                pbVar9 = local_80;
                if (uVar4 != 0) {
                  do {
                    pbVar10 = pbVar9 + 1;
                    *pbVar9 = *pbVar9 ^ *pbVar6;
                    pbVar6 = pbVar6 + 1;
                    pbVar9 = pbVar10;
                  } while (pbVar10 != local_80 + uVar4);
                }
                uVar2 = uVar2 + 1;
              } while (param_6 != uVar2);
            }
            uVar2 = uVar4;
            if (param_7 < uVar4) {
              uVar2 = param_7;
            }
            FUN_ram_4ff45158(param_8,local_80,uVar2);
            param_7 = param_7 - uVar2;
            param_8 = param_8 + uVar2;
            puVar7 = &uStack_d0;
            do {
              cVar1 = *(char *)((int)puVar7 + 3);
              puVar8 = (uint *)((int)puVar7 + -1);
              *(char *)((int)puVar7 + 3) = cVar1 + '\x01';
              if (cVar1 != -1) break;
              puVar7 = puVar8;
            } while (&uStack_d4 != puVar8);
            iVar5 = iVar3;
          } while (param_7 != 0);
        }
LAB_ram_481860be:
        FUN_ram_48178af2(local_80,0x40);
        FUN_ram_48178af2(local_c0,0x40);
        iVar3 = iVar5;
      }
    }
    FUN_ram_48176a1a(auStack_cc);
  }
  return iVar3;
}


