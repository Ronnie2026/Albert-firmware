/* Firmware entry: 0x480041b8 */

int FUN_ram_480041b8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint auStack_98 [2];
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_2 = param_2 + -1;
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  if (-1 < param_2) {
    puVar1 = (uint *)(param_1 + param_2 * 0x2c);
    do {
      if (((puVar1[9] != 0xffff) && (iVar2 = FUN_ram_48005c3c(puVar1), iVar2 == 3)) &&
         (puVar1[9] != 0xfffe)) {
        uVar5 = puVar1[3];
        uVar9 = puVar1[4];
        uVar6 = *puVar1;
        uVar3 = *puVar1;
        uVar11 = puVar1[10];
        memset(auStack_98,0,0x50);
        uStack_8c = ~uVar5;
        uVar5 = (uVar3 >> 0x1d & 1) << 0x1d;
        uStack_6c = (uVar6 >> 0x1e & 1) << 0x1e;
        auStack_98[0] = uVar5 | 0x20000 | uStack_6c;
        uStack_6c = uStack_6c | uVar5 | 0x30000;
        uStack_74 = 0xfffe;
        uStack_48 = 0xfffe;
        uStack_90 = 0x501153fc;
        uStack_64 = 0x501153fc;
        uStack_88 = uVar9;
        uStack_70 = uVar11;
        uStack_60 = uStack_8c;
        uStack_5c = uVar9;
        uStack_44 = uVar11;
        iVar2 = FUN_ram_480041b8(auStack_98,2,param_3,param_4);
        if (iVar2 != 0) goto LAB_ram_48004354;
      }
      uVar11 = puVar1[10];
      if (0xe < uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("sleep_retention.c",0x113,"sleep_retention_entries_try_create",
                         "owner > 0 && owner < BIT(REGDMA_LINK_ENTRY_NUM)");
      }
      FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
      uVar5 = (uint)(&DAT_ram_4ff4bd4c)[param_3 * 6] >> 4 & 0xf;
      if (((~uVar5 & uVar11) == 0) || ((uVar11 & uVar5) == 0)) {
        iVar2 = __ffssi2(uVar11);
        iVar2 = FUN_ram_48005306(puVar1,0,param_4,1,(&DAT_ram_4ff4bd3c)[param_3 * 6 + iVar2 + -1]);
      }
      else {
        DAT_ram_4ff480a8 = ~((&DAT_ram_4ff4bd4c)[param_3 * 6] & 0xf) & uVar11;
        if ((DAT_ram_4ff480a8 != 0) &&
           (iVar2 = FUN_ram_480041b8(&DAT_ram_4ff48080,1,param_3,param_4), iVar2 != 0)) {
          FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
          goto LAB_ram_4800440a;
        }
        if ((uVar11 & 1) == 0) {
          if ((uVar11 & 2) != 0) {
            uVar4 = 0;
            goto LAB_ram_480043a2;
          }
          if ((uVar11 & 4) != 0) {
            uVar7 = 0;
            uVar4 = 0;
            goto LAB_ram_480043b0;
          }
          uVar8 = 0;
          uVar4 = 0;
          uVar7 = 0;
LAB_ram_48004432:
          uVar10 = (&DAT_ram_4ff4bd48)[param_3 * 6];
        }
        else {
          uVar4 = (&DAT_ram_4ff4bd3c)[param_3 * 6];
          uVar7 = 0;
          if ((uVar11 & 2) != 0) {
LAB_ram_480043a2:
            uVar7 = (&DAT_ram_4ff4bd40)[param_3 * 6];
          }
          uVar8 = 0;
          if ((uVar11 & 4) != 0) {
LAB_ram_480043b0:
            uVar8 = (&DAT_ram_4ff4bd44)[param_3 * 6];
          }
          uVar10 = 0;
          if ((uVar11 & 8) != 0) goto LAB_ram_48004432;
        }
        iVar2 = FUN_ram_48005306(puVar1,1,param_4,4,uVar4,uVar7,uVar8,uVar10);
      }
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      if (iVar2 == 0) {
LAB_ram_4800440a:
        FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
        FUN_ram_48003d7e(param_4);
        return 0x101;
      }
      param_2 = param_2 + -1;
      FUN_ram_48003ade(puVar1[10],iVar2,param_3);
      puVar1 = puVar1 + -0xb;
    } while (param_2 != -1);
  }
  iVar2 = 0;
LAB_ram_48004354:
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  return iVar2;
}


