/* Firmware entry: 0x481a3300 */

int FUN_ram_481a3300(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid argument\n",uVar4,"gptimer",
                     "gptimer_new_timer",0x83);
  }
  else if (param_1[2] == 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid timer resolution:%lu\n",uVar4,
                     "gptimer","gptimer_new_timer",0x84,param_1[2]);
  }
  else {
    if ((param_1[3] == 0) || ((-0xf >> (param_1[3] & 0x1f) & 1U) == 0)) {
      piVar2 = (int *)FUN_ram_4ff2091a(1,0x58,0x804);
      iVar7 = 0;
      if (piVar2 == (int *)0x0) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): no mem for gptimer\n",uVar4,"gptimer",
                         "gptimer_new_timer",0x91);
        iVar7 = 0x101;
      }
      else {
        do {
          puVar3 = (undefined4 *)FUN_ram_481339c8(iVar7);
          puVar6 = puVar3 + 1;
          if (puVar3 == (undefined4 *)0x0) {
            uVar4 = FUN_ram_4ff44d14(4,0xffffffff);
            FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): no mem for group (%d)\n",uVar4,
                             "gptimer","gptimer_register_to_group",0x2e,iVar7);
            iVar7 = 0x101;
            goto LAB_ram_481a33cc;
          }
          FUN_ram_4ff3ec14();
          if (puVar3[3] == 0) {
            iVar8 = 0;
            iVar9 = 0;
LAB_ram_481a3566:
            puVar3[iVar9 + 3] = piVar2;
            FUN_ram_4ff3ee10(puVar6);
            uVar4 = *puVar3;
            *piVar2 = (int)puVar3;
            piVar2[1] = iVar9;
            FUN_ram_481a915c(piVar2 + 9,uVar4,iVar8);
            iVar7 = FUN_ram_4ff2ff60(*param_1,1);
            if (iVar7 == 0) {
              iVar7 = FUN_ram_48133bf4(piVar2,*param_1,param_1[2]);
              if (iVar7 == 0) {
                FUN_ram_4ff42b90(piVar2 + 9,0,0);
                puVar5 = (uint *)(piVar2[9] + iVar8 * 0x24);
                *puVar5 = (uint)(param_1[1] == 1) << 0x1e | *puVar5 & 0xbfffffff;
                FUN_ram_4ff3ec14(puVar6,0xffffffff);
                iVar7 = piVar2[9];
                *(uint *)(iVar7 + 0x70) = ~(1 << iVar9) & *(uint *)(iVar7 + 0x70);
                *(int *)(iVar7 + 0x7c) = 1 << iVar9;
                FUN_ram_4ff3ee10(puVar6);
                piVar2[0xe] = -0x4cc00001;
                piVar2[0xf] = 0;
                piVar2[0xb] = 0;
                uVar4 = param_1[4];
                iVar7 = param_1[3];
                piVar2[8] = param_1[1];
                piVar2[0xc] = iVar7;
                *(byte *)(piVar2 + 0x14) = *(byte *)(piVar2 + 0x14) & 0xfe | (byte)uVar4 & 1;
                *param_2 = (int)piVar2;
                return 0;
              }
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): set periph clock failed\n",uVar4,
                               "gptimer","gptimer_new_timer",0xa2);
            }
            else {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): clock source enable failed\n",uVar4,
                               "gptimer","gptimer_new_timer",0xa1);
            }
            goto LAB_ram_481a33fc;
          }
          if (puVar3[4] == 0) {
            iVar8 = 1;
            iVar9 = 1;
            goto LAB_ram_481a3566;
          }
          FUN_ram_4ff3ee10(puVar6);
          FUN_ram_48133b10(puVar3);
          bVar1 = iVar7 != 1;
          iVar7 = 1;
        } while (bVar1);
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): no free timer\n",uVar4,"gptimer",
                         "gptimer_register_to_group",0x41);
        iVar7 = 0x105;
LAB_ram_481a33cc:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): register timer failed\n",uVar4,"gptimer",
                         "gptimer_new_timer",0x93);
LAB_ram_481a33fc:
        FUN_ram_481a31d6(piVar2);
      }
      return iVar7;
    }
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid interrupt priority:%d\n",uVar4,
                     "gptimer","gptimer_new_timer",0x86,param_1[3]);
  }
  return 0x102;
}


