/* Firmware entry: 0x4815c02a */

void FUN_ram_4815c02a(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    if (iVar2 == 0) {
      return;
    }
    iStack_e4 = 0;
    while (iVar3 = FUN_ram_4815af12(iVar2,0xff,0x42,0,&iStack_e4,&uStack_e0,0xff), iVar3 == 0) {
      iVar3 = *param_2;
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
      if (iVar3 != 0) {
        uVar5 = uStack_e0 & 0xff;
        uVar1 = uStack_e0 >> 0x18;
        do {
          iVar4 = FUN_ram_4ff45520(&uStack_38,iVar3 + 8,0xf);
          if ((((iVar4 == 0) && (*(byte *)(iVar3 + 0x18) == uVar5)) &&
              (*(byte *)(iVar3 + 0x1a) <= uVar1)) &&
             (uVar1 < (uint)*(byte *)(iVar3 + 0x1a) + (uint)*(byte *)(iVar3 + 0x19)))
          goto LAB_ram_4815c0fc;
          iVar3 = *(int *)(iVar3 + 4);
        } while (iVar3 != 0);
      }
      FUN_ram_4815b3e2(iVar2,uStack_e0 & 0xff,uStack_e0._1_1_,&uStack_d8,uStack_e0._3_1_,0xff);
LAB_ram_4815c0fc:
      iStack_e4 = iStack_e4 + (uStack_e0 >> 0x10 & 0xff);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


