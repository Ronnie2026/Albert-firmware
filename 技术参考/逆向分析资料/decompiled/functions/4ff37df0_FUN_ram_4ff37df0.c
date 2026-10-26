/* Firmware entry: 0x4ff37df0 */

void FUN_ram_4ff37df0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int aiStack_44 [2];
  char *pcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff376e6();
  iVar1 = mhartid;
  aiStack_44[0] = 0;
  aiStack_44[1] = 0;
  pcStack_3c = (char *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  pcStack_30 = (code *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (&DAT_ram_4ff6d970)[mhartid] = param_1;
  if (param_2 == 0) {
LAB_ram_4ff37e6c:
    FUN_ram_4ff37658(10000);
    FUN_ram_4ff375f6();
    ets_delay_us(1);
    if (iVar1 != 0) {
      FUN_ram_4ff2fcd2(0);
      if (iVar1 == 1) goto LAB_ram_4ff37e94;
    }
  }
  else {
    iVar2 = FUN_ram_4ff37dc0(param_1);
    if ((iVar2 == 0x18) && (iVar1 == 1)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = FUN_ram_4ff37dc0(param_1);
    if ((iVar2 == 0x1018) && (iVar1 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = FUN_ram_4ff37dc0(param_1);
    if (iVar2 != 3) {
      iVar2 = FUN_ram_4ff37dc0(param_1);
      if (((iVar2 == 0x1b) && (iVar2 = FUN_ram_4ff36eb2(), iVar2 != iVar1)) &&
         (iVar2 = FUN_ram_4ff36eb2(), iVar2 != -1)) {
        (&DAT_ram_4ff6d970)[iVar1] = 0;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_ram_4ff37e6c;
    }
    iVar2 = FUN_ram_4ff36d2e();
    if (iVar2 != -1) {
      iVar2 = FUN_ram_4ff36d2e();
      if (iVar2 != iVar1) {
        (&DAT_ram_4ff6d970)[iVar1] = 0;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_ram_4ff37e6c;
    }
    if (iVar1 != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_ram_4ff37658(10000);
    FUN_ram_4ff375f6();
    ets_delay_us(1);
  }
  FUN_ram_4ff2fcd2(1);
LAB_ram_4ff37e94:
  FUN_ram_4ff2061c();
  FUN_ram_4ff45682();
  aiStack_44[0] = mhartid;
  uStack_34 = 0;
  aiStack_44[1] = 4;
  pcStack_3c = s_Unknown_ram_4ff5423c;
  uVar3 = FUN_ram_4ff37bd0(param_1,aiStack_44);
  uStack_24 = CONCAT31(uStack_24._1_3_,(char)(param_2 | uVar3));
  if (((param_2 | uVar3) & 0xff) == 0) {
    FUN_ram_4ff37cc0(param_1,aiStack_44);
  }
  else {
    FUN_ram_4ff37c0a();
  }
  pcStack_30 = FUN_ram_4ff37f54;
  uStack_28 = param_1;
  FUN_ram_4ff3772e(aiStack_44);
  return;
}


