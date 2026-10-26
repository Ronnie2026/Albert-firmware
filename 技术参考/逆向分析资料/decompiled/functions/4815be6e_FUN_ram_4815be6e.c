/* Firmware entry: 0x4815be6e */

void FUN_ram_4815be6e(int param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *(int *)(param_1 + 0x10);
  do {
    if (iVar4 == 0) {
      piVar5 = (int *)*param_2;
      do {
        if (piVar5 == (int *)0x0) {
          return;
        }
        while ((piVar5[8] != piVar5[7] || (piVar5[9] != (uint)*(byte *)((int)piVar5 + 0x19)))) {
          iVar4 = *(int *)(param_1 + 0x10);
          while ((iVar4 != 0 &&
                 (((iVar6 = *(int *)(iVar4 + 0xc), iVar6 == -0x10 || (iVar6 == 0)) ||
                  ((iVar6 == -1 ||
                   (iVar6 = FUN_ram_4815b3e2(iVar4,(char)piVar5[6],0x48,piVar5 + 2,0xff,
                                             *(undefined1 *)((int)piVar5 + 0x1a)), iVar6 != 0)))))))
          {
            iVar4 = *(int *)(iVar4 + 4);
          }
          iVar4 = *piVar5;
          piVar3 = (int *)piVar5[1];
          if (iVar4 == 0) {
            iVar6 = param_2[2];
            *param_2 = (int)piVar3;
          }
          else {
            iVar6 = param_2[2];
            *(int **)(iVar4 + 4) = piVar3;
          }
          if (piVar3 == (int *)0x0) {
            param_2[1] = iVar4;
            param_2[2] = iVar6 + -1;
            FUN_ram_4ff209c6(piVar5);
            return;
          }
          *piVar3 = iVar4;
          param_2[2] = iVar6 + -1;
          FUN_ram_4ff209c6(piVar5);
          piVar5 = piVar3;
        }
        piVar5 = (int *)piVar5[1];
      } while( true );
    }
    iStack_e4 = 0;
    while (iVar6 = FUN_ram_4815af12(iVar4,0xff,0x42,0,&iStack_e4,&uStack_e0,0xff), iVar6 == 0) {
      iVar6 = *param_2;
      uStack_c0 = uStack_e0;
      uStack_a0 = uStack_e0;
      uStack_60 = uStack_e0;
      uStack_bc = uStack_dc;
      uStack_9c = uStack_dc;
      uStack_5c = uStack_dc;
      uStack_b8 = uStack_d8;
      uStack_98 = uStack_d8;
      uStack_58 = uStack_d8;
      uStack_b4 = uStack_d4;
      uStack_94 = uStack_d4;
      uStack_54 = uStack_d4;
      uStack_b0 = uStack_d0;
      uStack_90 = uStack_d0;
      uStack_50 = uStack_d0;
      uStack_ac = uStack_cc;
      uStack_8c = uStack_cc;
      uStack_4c = uStack_cc;
      uStack_a8 = uStack_c8;
      uStack_88 = uStack_c8;
      uStack_48 = uStack_c8;
      uStack_a4 = uStack_c4;
      uStack_84 = uStack_c4;
      uStack_44 = uStack_c4;
      uStack_40 = uStack_e0;
      uVar1 = uStack_40;
      uStack_3c = uStack_dc;
      uStack_38 = uStack_d8;
      uStack_34 = uStack_d4;
      uStack_30 = uStack_d0;
      uStack_2c = uStack_cc;
      uStack_28 = uStack_c8;
      uStack_24 = uStack_c4;
      uStack_80 = uStack_e0;
      uStack_7c = uStack_dc;
      uStack_78 = uStack_d8;
      uStack_74 = uStack_d4;
      uStack_70 = uStack_d0;
      uStack_6c = uStack_cc;
      uStack_68 = uStack_c8;
      uStack_64 = uStack_c4;
      if (iVar6 != 0) {
        uVar8 = uStack_e0 & 0xff;
        uStack_40._3_1_ = (byte)(uStack_e0 >> 0x18);
        bVar2 = uStack_40._3_1_;
        uStack_40 = uVar1;
        do {
          iVar7 = FUN_ram_4ff45520(&uStack_38,iVar6 + 8,0xf);
          if ((((iVar7 == 0) && (*(byte *)(iVar6 + 0x18) == uVar8)) &&
              (*(byte *)(iVar6 + 0x1a) <= bVar2)) &&
             (bVar2 < (byte)((-(*(byte *)(iVar6 + 0x1a) != 0) & 0x7fU) + 0x80))) {
            *(uint *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + (uStack_c8 & 0xffff);
            *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
            break;
          }
          iVar6 = *(int *)(iVar6 + 4);
        } while (iVar6 != 0);
      }
      iStack_e4 = iStack_e4 + (uStack_e0 >> 0x10 & 0xff);
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}


