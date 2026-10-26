/* Firmware entry: 0x4800a20c */

undefined4 FUN_ram_4800a20c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_set_pin",0x339);
    return 0xffffffff;
  }
  if (param_1 == 5) {
    if ((-1 < (int)param_2) && (iVar2 = FUN_ram_4812c13a(param_2), iVar2 == 0)) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = "E (%lu) %s: %s(%d): tx_io_num error\n";
      uVar1 = 0x34c;
LAB_ram_4800a6aa:
      FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,pcVar4,uVar3,&DAT_ram_481b4c88,"uart_set_pin",uVar1);
      return 0xffffffff;
    }
    if ((-1 < (int)param_3) && (iVar2 = FUN_ram_4812c13a(param_3), iVar2 == 0)) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = "E (%lu) %s: %s(%d): rx_io_num error\n";
      uVar1 = 0x34d;
      goto LAB_ram_4800a6aa;
    }
    if ((-1 < (int)param_4) && (iVar2 = FUN_ram_4812c13a(param_4), iVar2 == 0)) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = "E (%lu) %s: %s(%d): rts_io_num error\n";
      uVar1 = 0x34e;
      goto LAB_ram_4800a6aa;
    }
    if ((-1 < (int)param_5) && (iVar2 = FUN_ram_4812c13a(param_5), iVar2 == 0)) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = "E (%lu) %s: %s(%d): cts_io_num error\n";
      uVar1 = 0x34f;
      goto LAB_ram_4800a6aa;
    }
  }
  else {
    if (-1 < (int)param_2) {
      if ((int)(param_2 - 0x20) < 0) {
        uVar8 = -0x1000000 << (0x1f - param_2 & 0x1f);
      }
      else {
        uVar8 = -0x800000 >> (param_2 - 0x20 & 0x1f);
      }
      if ((uVar8 & 1) != 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: %s(%d): tx_io_num error\n";
        uVar1 = 0x33b;
        goto LAB_ram_4800a6aa;
      }
    }
    if (-1 < (int)param_3) {
      if ((int)(param_3 - 0x20) < 0) {
        uVar8 = -0x1000000 << (0x1f - param_3 & 0x1f);
      }
      else {
        uVar8 = -0x800000 >> (param_3 - 0x20 & 0x1f);
      }
      if ((uVar8 & 1) != 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: %s(%d): rx_io_num error\n";
        uVar1 = 0x33c;
        goto LAB_ram_4800a6aa;
      }
    }
    if (-1 < (int)param_4) {
      if ((int)(param_4 - 0x20) < 0) {
        uVar8 = -0x1000000 << (0x1f - param_4 & 0x1f);
      }
      else {
        uVar8 = -0x800000 >> (param_4 - 0x20 & 0x1f);
      }
      if ((uVar8 & 1) != 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: %s(%d): rts_io_num error\n";
        uVar1 = 0x33d;
        goto LAB_ram_4800a6aa;
      }
    }
    if (-1 < (int)param_5) {
      if ((int)(param_5 - 0x20) < 0) {
        uVar8 = -0x1000000 << (0x1f - param_5 & 0x1f);
      }
      else {
        uVar8 = -0x800000 >> (param_5 - 0x20 & 0x1f);
      }
      if ((uVar8 & 1) != 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: %s(%d): cts_io_num error\n";
        uVar1 = 0x33e;
        goto LAB_ram_4800a6aa;
      }
    }
  }
  FUN_ram_48008120(param_1,~param_2 >> 0x1f,~param_3 >> 0x1f,~param_4 >> 0x1f,~param_5 >> 0x1f);
  if ((int)param_2 < 1) {
    if ((int)param_3 < 1) {
      uVar6 = 0;
      uVar9 = 0;
      uVar8 = 0;
      if (0 < (int)param_4) goto LAB_ram_4800a29a;
      uVar9 = uVar6;
      if (0 < (int)param_5) goto LAB_ram_4800a2b6;
LAB_ram_4800a2ce:
      if (-1 < (int)param_2) goto LAB_ram_4800a3c2;
joined_r0x4800a2da:
      if ((int)param_3 < 0) goto joined_r0x4800a422;
LAB_ram_4800a450:
      *(uint *)(&DAT_ram_4ff48240 + param_1 * 0x38) = param_3;
      FUN_ram_4812bfa6(param_3);
LAB_ram_4800a464:
      iVar2 = FUN_ram_48007eee(param_1,param_3,1);
      if (iVar2 == 0) {
        if ((int)(param_3 - 0x20) < 0) {
          uVar5 = 1 << (param_3 & 0x1f);
          uVar6 = 0;
        }
        else {
          uVar6 = 1 << (param_3 - 0x20 & 0x1f);
          uVar5 = 0;
        }
        uVar9 = uVar9 & ~uVar5;
        uVar8 = uVar8 & ~uVar6;
        if (param_1 == 5) {
          if (param_3 == param_2) goto LAB_ram_4800a7c4;
          FUN_ram_4812c234(param_3,0);
          FUN_ram_4812c15c(param_3);
          goto LAB_ram_4800a7d0;
        }
LAB_ram_4800a4a2:
        FUN_ram_4812a6a6(param_3);
        gpio_matrix_in(param_3,*(uint *)(&DAT_ram_48235d9c + param_1 * 0x14) >> 0x14,0);
      }
      goto joined_r0x4800a422;
    }
    if ((int)(param_3 - 0x20) < 0) {
      uVar9 = 1 << (param_3 & 0x1f);
      uVar8 = 0;
    }
    else {
      uVar8 = 1 << (param_3 - 0x20 & 0x1f);
      uVar9 = 0;
    }
    if ((int)param_4 < 1) {
      uVar6 = uVar9;
      if (0 < (int)param_5) goto LAB_ram_4800a2b6;
      if (-1 < (int)param_2) goto LAB_ram_4800a3c2;
      goto LAB_ram_4800a450;
    }
LAB_ram_4800a29a:
    if ((int)(param_4 - 0x20) < 0) {
      uVar5 = 1 << (param_4 & 0x1f);
      uVar6 = 0;
    }
    else {
      uVar6 = 1 << (param_4 - 0x20 & 0x1f);
      uVar5 = 0;
    }
    uVar9 = uVar9 | uVar5;
    uVar8 = uVar8 | uVar6;
    uVar6 = uVar9;
    if (0 < (int)param_5) {
LAB_ram_4800a2b6:
      if ((int)(param_5 - 0x20) < 0) {
        uVar5 = 1 << (param_5 & 0x1f);
        uVar9 = 0;
      }
      else {
        uVar9 = 1 << (param_5 - 0x20 & 0x1f);
        uVar5 = 0;
      }
      uVar8 = uVar8 | uVar9;
      uVar9 = uVar6 | uVar5;
      goto LAB_ram_4800a2ce;
    }
    if (-1 < (int)param_2) goto LAB_ram_4800a3c2;
    if (-1 < (int)param_3) goto LAB_ram_4800a450;
  }
  else {
    if ((int)(param_2 - 0x20) < 0) {
      uVar9 = 1 << (param_2 & 0x1f);
      uVar8 = 0;
    }
    else {
      uVar8 = 1 << (param_2 - 0x20 & 0x1f);
      uVar9 = 0;
    }
    if ((int)param_3 < 1) {
      if (0 < (int)param_4) {
        if ((int)(param_4 - 0x20) < 0) {
          uVar5 = 1 << (param_4 & 0x1f);
          uVar6 = 0;
        }
        else {
          uVar6 = 1 << (param_4 - 0x20 & 0x1f);
          uVar5 = 0;
        }
        uVar9 = uVar9 | uVar5;
        uVar8 = uVar8 | uVar6;
        if (0 < (int)param_5) {
          if ((int)(param_5 - 0x20) < 0) {
            uVar5 = 1 << (param_5 & 0x1f);
            uVar6 = 0;
          }
          else {
            uVar6 = 1 << (param_5 - 0x20 & 0x1f);
            uVar5 = 0;
          }
          uVar9 = uVar9 | uVar5;
          uVar8 = uVar8 | uVar6;
        }
        goto LAB_ram_4800a3c2;
      }
      if ((int)param_5 < 1) {
        *(uint *)(&DAT_ram_4ff4823c + param_1 * 0x38) = param_2;
        FUN_ram_4812bfa6(param_2);
      }
      else {
        if ((int)(param_5 - 0x20) < 0) {
          uVar5 = 1 << (param_5 & 0x1f);
          uVar6 = 0;
        }
        else {
          uVar6 = 1 << (param_5 - 0x20 & 0x1f);
          uVar5 = 0;
        }
        uVar9 = uVar9 | uVar5;
        uVar8 = uVar8 | uVar6;
        *(uint *)(&DAT_ram_4ff4823c + param_1 * 0x38) = param_2;
        FUN_ram_4812bfa6(param_2);
      }
LAB_ram_4800a652:
      iVar2 = FUN_ram_48007eee(param_1,param_2,0);
      if (iVar2 != 0) goto joined_r0x4800a2da;
    }
    else {
      if ((int)(param_3 - 0x20) < 0) {
        uVar9 = uVar9 | 1 << (param_3 & 0x1f);
      }
      else {
        uVar8 = uVar8 | 1 << (param_3 - 0x20 & 0x1f);
      }
      if (0 < (int)param_4) goto LAB_ram_4800a29a;
      uVar6 = uVar9;
      if (0 < (int)param_5) goto LAB_ram_4800a2b6;
LAB_ram_4800a3c2:
      *(uint *)(&DAT_ram_4ff4823c + param_1 * 0x38) = param_2;
      FUN_ram_4812bfa6(param_2);
      if (param_3 != param_2) goto LAB_ram_4800a652;
    }
    if (param_1 == 5) {
      FUN_ram_4812c15c(param_2);
      FUN_ram_4812c75e(param_2,DAT_ram_48235dfc >> 0x14,0,0);
    }
    else {
      FUN_ram_4812c062(param_2,1);
      gpio_matrix_out(param_2,*(uint *)(&DAT_ram_48235d98 + param_1 * 0x14) >> 0x14,0,0);
    }
    if (-1 < (int)param_3) {
      *(uint *)(&DAT_ram_4ff48240 + param_1 * 0x38) = param_3;
      FUN_ram_4812bfa6(param_3);
      if (param_3 != param_2) goto LAB_ram_4800a464;
      if ((int)(param_3 - 0x20) < 0) {
        uVar5 = 1 << (param_3 & 0x1f);
        uVar6 = 0;
      }
      else {
        uVar6 = 1 << (param_3 - 0x20 & 0x1f);
        uVar5 = 0;
      }
      uVar9 = uVar9 & ~uVar5;
      uVar8 = uVar8 & ~uVar6;
      if (param_1 != 5) goto LAB_ram_4800a4a2;
LAB_ram_4800a7c4:
      FUN_ram_4812c234(param_3,2);
LAB_ram_4800a7d0:
      FUN_ram_4812c6d8(param_3,DAT_ram_48235e00 >> 0x14,0);
    }
joined_r0x4800a422:
    if ((int)param_4 < 0) goto joined_r0x4800a578;
  }
  *(uint *)(&DAT_ram_4ff48244 + param_1 * 0x38) = param_4;
  iVar2 = FUN_ram_48007eee(param_1,param_4,2);
  if (iVar2 == 0) {
    if (param_1 == 5) {
      FUN_ram_4812c15c(param_4);
      FUN_ram_4812c75e(param_4,DAT_ram_48235e04 >> 0x14,0,0);
    }
    else {
      FUN_ram_4812c062(param_4,1);
      gpio_matrix_out(param_4,*(uint *)(&DAT_ram_48235da0 + param_1 * 0x14) >> 0x14,0,0);
    }
  }
joined_r0x4800a578:
  if (-1 < (int)param_5) {
    *(uint *)(&DAT_ram_4ff48248 + param_1 * 0x38) = param_5;
    iVar2 = FUN_ram_48007eee(param_1,param_5,3);
    if (iVar2 == 0) {
      if (param_1 == 5) {
        FUN_ram_4812c234(param_5,0);
        FUN_ram_4812c15c(param_5);
        FUN_ram_4812c6d8(param_5,DAT_ram_48235e08 >> 0x14,0);
      }
      else {
        FUN_ram_4812a082(param_5);
        FUN_ram_4812a6a6(param_5);
        gpio_matrix_in(param_5,*(uint *)(&DAT_ram_48235da4 + param_1 * 0x14) >> 0x14,0);
      }
      if ((int)(param_5 - 0x20) < 0) {
        uVar5 = 1 << (param_5 & 0x1f);
        uVar6 = 0;
      }
      else {
        uVar6 = 1 << (param_5 - 0x20 & 0x1f);
        uVar5 = 0;
      }
      uVar9 = uVar9 & ~uVar5;
      uVar8 = uVar8 & ~uVar6;
    }
  }
  *(uint *)(&DAT_ram_4ff48250 + param_1 * 0x38) = uVar9;
  *(uint *)(&DAT_ram_4ff48254 + param_1 * 0x38) = uVar8;
  uVar10 = FUN_ram_481333c2(uVar9,uVar8);
  uVar9 = (uint)uVar10 & uVar9;
  uVar8 = (uint)((ulonglong)uVar10 >> 0x20) & uVar8;
  if (uVar9 != 0 || uVar8 != 0) {
    do {
      uVar6 = __ctzdi2(uVar9,uVar8);
      if ((int)(uVar6 - 0x20) < 0) {
        uVar5 = 0;
        uVar7 = 1 << (uVar6 & 0x1f);
      }
      else {
        uVar5 = 1 << (uVar6 - 0x20 & 0x1f);
        uVar7 = 0;
      }
      uVar9 = uVar9 & ~uVar7;
      uVar8 = uVar8 & ~uVar5;
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,&DAT_ram_481b4c88,
                       "W (%lu) %s: GPIO %d is not usable, maybe used by others\n",uVar1,
                       &DAT_ram_481b4c88,uVar6);
    } while (uVar9 != 0 || uVar8 != 0);
  }
  return 0;
}


