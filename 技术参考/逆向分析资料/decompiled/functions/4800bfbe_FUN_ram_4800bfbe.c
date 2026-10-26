/* Firmware entry: 0x4800bfbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4800bfbe(uint param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5,
                    uint param_6)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_driver_install",0x795);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -1;
  }
  iVar9 = 0x10;
  if (param_1 != 5) {
    iVar9 = 0x80;
  }
  if (param_2 <= iVar9) {
    uVar5 = FUN_ram_4ff44d14();
    pcVar7 = "E (%lu) %s: %s(%d): uart rx buffer length error\n";
    uVar3 = 0x796;
LAB_ram_4800c3f0:
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,pcVar7,uVar5,&DAT_ram_481b4c88,"uart_driver_install",uVar3)
    ;
    return -1;
  }
  if (((int)param_3 <= iVar9) && (param_3 != 0)) {
    uVar5 = FUN_ram_4ff44d14();
    pcVar7 = "E (%lu) %s: %s(%d): uart tx buffer length error\n";
    uVar3 = 0x797;
    goto LAB_ram_4800c3f0;
  }
  if ((param_6 & 0x400) != 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,&DAT_ram_481b4c88,
                     "W (%lu) %s: ESP_INTR_FLAG_IRAM flag is set while CONFIG_UART_ISR_IN_IRAM is not enabled, flag updated\n"
                     ,uVar3,&DAT_ram_481b4c88);
    param_6 = param_6 & 0xfffffbff;
  }
  iVar9 = param_1 * 4;
  if (*(int *)(&DAT_ram_4ff5a014 + iVar9) != 0) {
    uVar3 = FUN_ram_4ff44d14();
    pcVar7 = "E (%lu) %s: UART driver already installed\n";
    goto LAB_ram_4800c292;
  }
  puVar2 = (uint *)FUN_ram_4ff2091a(1,0x78,0x1000);
  if (puVar2 != (uint *)0x0) {
    uVar3 = 0x10;
    if (param_1 != 5) {
      uVar3 = 0x80;
    }
    uVar4 = FUN_ram_4ff2091a(uVar3,4,0x1000);
    puVar2[7] = uVar4;
    if (uVar4 != 0) {
      if (0 < (int)param_4) {
        uVar4 = FUN_ram_481a7c04(param_4,0xc,0x1000);
        puVar2[0x16] = uVar4;
        if (uVar4 == 0) goto LAB_ram_4800c268;
      }
      if (param_3 != 0) {
        uVar4 = FUN_ram_4ff369e8(param_3,0,0x1000);
        puVar2[0x18] = uVar4;
        if (uVar4 == 0) goto LAB_ram_4800c268;
      }
      uVar4 = FUN_ram_4ff369e8(param_2,2,0x1000);
      puVar2[0x17] = uVar4;
      uVar4 = FUN_ram_481a7cec(0,0,1,0x1000);
      puVar2[0x1a] = uVar4;
      uVar4 = FUN_ram_481a7cec(0,0,1,0x1000);
      puVar2[0x19] = uVar4;
      uVar4 = FUN_ram_481a7cec(0,0,3,0x1000);
      puVar2[0x1d] = uVar4;
      uVar4 = FUN_ram_481a7cec(0,0,3,0x1000);
      puVar2[0x1c] = uVar4;
      uVar4 = FUN_ram_481a7cec(0,0,3,0x1000);
      puVar2[0x1b] = uVar4;
      if ((((puVar2[0x17] != 0) && (puVar2[0x19] != 0)) && (puVar2[0x1a] != 0)) &&
         (((puVar2[0x1d] != 0 && (puVar2[0x1c] != 0)) && (uVar4 != 0)))) {
        puVar2[0xe] = param_3;
        *puVar2 = param_1;
        puVar2[3] = 0;
        *(undefined2 *)(puVar2 + 4) = 0;
        puVar2[1] = param_4;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        *(undefined2 *)(puVar2 + 0x14) = 0;
        *(undefined1 *)((int)puVar2 + 0x52) = 0;
        puVar2[5] = 0;
        *(undefined1 *)(puVar2 + 6) = 0;
        *(undefined1 *)(puVar2 + 0xf) = 0;
        puVar2[0x15] = 0;
        puVar2[9] = 0x101;
        piVar10 = (int *)(&DAT_ram_4ff5a014 + iVar9);
        *piVar10 = (int)puVar2;
        FUN_ram_4ff3afa2(uVar4,0,0,0);
        FUN_ram_48009e12(param_1,10);
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)(*piVar10 + 0x58);
          uVar3 = FUN_ram_4ff44d14();
          uVar5 = FUN_ram_4ff3ba10(*(undefined4 *)(*piVar10 + 0x58));
          FUN_ram_4ff44bf0(3,&DAT_ram_481b4c88,"I (%lu) %s: queue free spaces: %lu\n",uVar3,
                           &DAT_ram_481b4c88,uVar5);
        }
        iVar11 = param_1 * 0x38;
        FUN_ram_48008e6a(param_1);
        iVar6 = *(int *)(&DAT_ram_4ff48228 + iVar11);
        iVar9 = *(int *)(&DAT_ram_4ff5a014 + iVar9);
        uVar1 = (&DAT_ram_48235da8)[param_1 * 0x14];
        *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xfff80000;
        *(undefined4 *)(iVar6 + 0x10) = 0x7ffff;
        iVar9 = FUN_ram_48003406(uVar1,param_6,iVar6 + 8,0x7ffff,&LAB_ram_48008552,iVar9,iVar9 + 8);
        if (iVar9 != 0) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,
                           "E (%lu) %s: %s(%d): Could not allocate an interrupt for UART\n",uVar3,
                           &DAT_ram_481b4c88,"uart_driver_install",0x7d4);
          goto LAB_ram_4800c46c;
        }
        if (*(int *)(&DAT_ram_4ff4822c + iVar11) == -1) {
          if (param_1 != 0) {
            if (param_1 == 5) {
              FUN_ram_4ff2ff60(0x11,1);
              FUN_ram_4ff3ec14(&DAT_ram_4ff48348,0xffffffff);
              FUN_ram_4ff3122a();
              _DAT_ram_50120004 = _DAT_ram_50120004 & 0x3fffffff;
              FUN_ram_4ff31240();
              DAT_ram_4ff48344 = 0x11;
              FUN_ram_4ff3ee10(&DAT_ram_4ff48348);
              goto LAB_ram_4800c512;
            }
            FUN_ram_4ff2ff60(9,1);
            FUN_ram_4ff3ec14(iVar11 + 0x4ff48230,0xffffffff);
            FUN_ram_4ff3122a();
            puVar8 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar11);
            if (puVar8 == &DAT_ram_500ca000) {
              _DAT_ram_500e6068 = _DAT_ram_500e6068 & 0xfcffffff | 0x2000000;
            }
            else if (puVar8 == &DAT_ram_500cb000) {
              _DAT_ram_500e606c = _DAT_ram_500e606c & 0xfcffffff | 0x2000000;
            }
            else if (puVar8 == &DAT_ram_500cc000) {
              _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xfcffffff | 0x2000000;
            }
            else if (puVar8 == &DAT_ram_500cd000) {
              _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xfcffffff | 0x2000000;
            }
            else {
              if (puVar8 != &DAT_ram_500ce000) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e06();
              }
              _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xfcffffff | 0x2000000;
            }
            FUN_ram_4ff31240();
            *(undefined4 *)(&DAT_ram_4ff4822c + param_1 * 0x38) = 9;
            FUN_ram_4ff3ee10(iVar11 + 0x4ff48230);
          }
LAB_ram_4800c208:
          uStack_33 = 10;
          uStack_32 = 0x78;
        }
        else {
          if (param_1 != 5) goto LAB_ram_4800c208;
LAB_ram_4800c512:
          uStack_33 = 4;
          uStack_32 = 10;
        }
        uStack_38 = 0x80195;
        uStack_34 = 10;
        iVar9 = FUN_ram_4800b2a2(param_1,&uStack_38);
        if (iVar9 == 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,
                         "E (%lu) %s: %s(%d): Could not configure the interrupt for UART\n",uVar3,
                         &DAT_ram_481b4c88,"uart_driver_install",0x7fb);
        iVar9 = -1;
LAB_ram_4800c46c:
        FUN_ram_4800be02(param_1);
        return iVar9;
      }
    }
LAB_ram_4800c268:
    FUN_ram_48008076(puVar2);
  }
  *(undefined4 *)(&DAT_ram_4ff5a014 + iVar9) = 0;
  uVar3 = FUN_ram_4ff44d14();
  pcVar7 = "E (%lu) %s: UART driver malloc error\n";
LAB_ram_4800c292:
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,pcVar7,uVar3,&DAT_ram_481b4c88);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return -1;
}


