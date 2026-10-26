/* Firmware entry: 0x48002cf6 */

undefined4
FUN_ram_48002cf6(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int *param_7,undefined4 *param_8)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int local_80;
  int iStack_64;
  int aiStack_5c [3];
  uint local_50 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 & 0x300) == 0x300) {
    return 0x102;
  }
  if ((param_2 & 0xf0) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((param_3 != 0) && (param_4 == 0)) {
        return 0x102;
      }
      if ((((param_2 & 0x400) == 0) || (param_5 == 0)) || (param_5 + 0xb0100000 < 0xc0000))
      goto LAB_ram_48002f1a;
      if (param_5 + 0xafef8000 < 0x8000) {
        if (param_7 != (int *)0x0) {
          return 0x102;
        }
        if ((param_2 & 0xfe) == 0) {
          param_2 = param_2 | 0xe;
        }
      }
      else {
        if (0x1ffff < param_5 + 0xb0400000) {
          return 0x102;
        }
        bVar2 = false;
        if (param_7 != (int *)0x0) {
          return 0x102;
        }
LAB_ram_480033c8:
        if ((param_2 & 0xfe) == 0) {
          if (bVar2) {
LAB_ram_4800330e:
            param_2 = param_2 | 2;
          }
          else {
            param_2 = param_2 | 0xe;
          }
        }
      }
      goto LAB_ram_48002dc0;
    }
    if (param_5 == 0) {
      return 0x102;
    }
    if ((int)param_1 < 0) {
      return 0x102;
    }
    if (param_3 != 0) {
      if (param_4 == 0) {
        return 0x102;
      }
      if ((param_2 & 0x400) != 0) goto LAB_ram_48002f34;
      if (param_7 != (int *)0x0) goto LAB_ram_48002d48;
      uVar14 = 0xffffffff;
      if ((param_2 & 0xfe) != 0) goto LAB_ram_48002de0;
      param_2 = param_2 | 2;
      goto LAB_ram_48002dd8;
    }
    if ((param_2 & 0x400) == 0) {
LAB_ram_48002d48:
      uVar14 = 0xffffffff;
      if ((param_2 & 0xfe) != 0) goto LAB_ram_48002de0;
      param_2 = param_2 | 2;
      goto LAB_ram_48002d54;
    }
LAB_ram_48002f34:
    if (0xbffff < param_5 + 0xb0100000) {
      if (0x7fff < param_5 + 0xafef8000) {
        if (0x1ffff < param_5 + 0xb0400000) {
          return 0x102;
        }
        if (param_7 == (int *)0x0) {
          bVar2 = true;
          goto LAB_ram_480033c8;
        }
        if ((param_2 & 0xfe) != 0) goto LAB_ram_48002dc0;
        goto LAB_ram_4800330e;
      }
      if (param_7 != (int *)0x0) goto LAB_ram_480032e6;
      if ((param_2 & 0xfe) == 0) {
        param_2 = param_2 | 2;
        goto LAB_ram_48002dd8;
      }
      goto LAB_ram_48002d54;
    }
    if (param_7 != (int *)0x0) goto LAB_ram_48002d48;
LAB_ram_480032e6:
    if ((param_2 & 0xfe) == 0) {
      param_2 = param_2 | 2;
      goto LAB_ram_48002dc8;
    }
LAB_ram_48002d64:
    uVar14 = 0xffffffff;
  }
  else {
    if (param_5 != 0) {
      return 0x102;
    }
    if ((param_2 & 0x100) != 0) {
      return 0x102;
    }
    if ((param_3 != 0) && (param_4 == 0)) {
      return 0x102;
    }
LAB_ram_48002f1a:
    if (param_7 != (int *)0x0) {
      return 0x102;
    }
    if ((param_2 & 0xfe) == 0) {
      param_2 = param_2 | 0xe;
    }
LAB_ram_48002dc0:
    uVar14 = 6;
    if (param_1 != 0xffffffff) {
LAB_ram_48002dc8:
      uVar14 = 0xf;
      if ((param_1 != 0xfffffffe) && (uVar14 = 0x10, param_1 != 0xfffffffd)) {
LAB_ram_48002dd8:
        uVar14 = 7;
        if (param_1 != 0xfffffffc) {
LAB_ram_48002d54:
          uVar14 = 0x1d;
          if ((param_1 != 0xfffffffb) && (uVar14 = 0xb, param_1 != 0xfffffffa))
          goto LAB_ram_48002d64;
        }
      }
    }
  }
LAB_ram_48002de0:
  puVar3 = (undefined4 *)FUN_ram_4ff206d8(8,0x804);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x101;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  uVar10 = mhartid;
  if (param_7 != (int *)0x0) {
    if ((uint *)*param_7 == (uint *)0x0) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
      return 0x102;
    }
    uVar10 = *(uint *)*param_7;
    uVar14 = uVar10 >> 0x11 & 0x1f;
    uVar10 = uVar10 >> 0x10 & 1;
  }
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  uVar13 = param_2;
  if ((param_2 & 0xfe) == 0) {
    uVar13 = param_2 | 0xe;
  }
  puVar12 = DAT_ram_4ff6d9c8;
  if (DAT_ram_4ff6d9c8 == (uint *)0x0) {
    if (uVar14 == 0xffffffff) goto LAB_ram_48002f6c;
LAB_ram_4800302a:
    local_50[0] = (uVar14 & 0x1f) << 0x11;
    puVar12 = local_50;
LAB_ram_48003040:
    iVar5 = FUN_ram_48002b2e(puVar12,uVar13,uVar10,uVar14);
    if (iVar5 == 0) {
LAB_ram_48002ea8:
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
      thunk_FUN_ram_4ff209c6(puVar3);
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"intr_alloc",
                       "E (%lu) %s: No free interrupt inputs for %s interrupt (flags 0x%X)\n",uVar4,
                       "intr_alloc",(&PTR_s_LP_RTC_ram_481d5910_ram_48235a9c)[param_1],param_2);
      return 0x105;
    }
    uVar14 = *puVar12 >> 0x11 & 0x1f;
  }
  else {
    do {
      while ((*puVar12 & 4) != 0) {
        uVar7 = *puVar12;
        if (uVar10 == (uVar7 >> 0x10 & 1)) {
          piVar8 = (int *)puVar12[2];
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("intr_alloc.c",199,"find_desc_for_source","svd != NULL");
          }
          do {
            if (param_1 == (*piVar8 << 0xf) >> 0x10) goto LAB_ram_48002e98;
            piVar8 = (int *)piVar8[5];
          } while (piVar8 != (int *)0x0);
        }
LAB_ram_48002e64:
        puVar1 = puVar12 + 3;
        puVar12 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) goto LAB_ram_48002f66;
      }
      if (param_1 != (int)(short)(ushort)puVar12[1]) goto LAB_ram_48002e64;
      uVar7 = *puVar12;
      if (uVar10 == (uVar7 >> 0x10 & 1)) {
LAB_ram_48002e98:
        if (((uVar14 != 0xffffffff) && (uVar14 != (uVar7 >> 0x11 & 0x1f))) ||
           (iVar5 = FUN_ram_48002b2e(puVar12,uVar13,uVar10,uVar14), iVar5 == 0))
        goto LAB_ram_48002ea8;
        uVar14 = *puVar12 >> 0x11 & 0x1f;
        goto LAB_ram_480030e2;
      }
      puVar1 = puVar12 + 3;
      puVar12 = (uint *)*puVar1;
    } while ((uint *)*puVar1 != (uint *)0x0);
LAB_ram_48002f66:
    puVar12 = DAT_ram_4ff6d9c8;
    if (uVar14 != 0xffffffff) {
      do {
        if ((uVar10 == (*puVar12 >> 0x10 & 1)) && (uVar14 == (*puVar12 >> 0x11 & 0x1f)))
        goto LAB_ram_48003040;
        puVar12 = (uint *)puVar12[3];
      } while (puVar12 != (uint *)0x0);
      goto LAB_ram_4800302a;
    }
LAB_ram_48002f6c:
    uVar14 = 0xffffffff;
    iStack_64 = 0x7fffffff;
    local_80 = 9;
    uVar7 = 0;
    puVar12 = DAT_ram_4ff6d9c8;
joined_r0x48002f94:
    do {
      if (puVar12 == (uint *)0x0) {
        local_50[0] = local_50[0] & 0xffc1ffff | (uVar7 & 0x1f) << 0x11;
        puVar12 = local_50;
      }
      else {
        if (uVar10 != (*puVar12 >> 0x10 & 1)) {
          puVar12 = (uint *)puVar12[3];
          goto joined_r0x48002f94;
        }
        if ((*puVar12 >> 0x11 & 0x1f) != uVar7) {
          puVar12 = (uint *)puVar12[3];
          goto joined_r0x48002f94;
        }
      }
      FUN_ram_480038ec(uVar10,uVar7,aiStack_5c);
      iVar5 = FUN_ram_48002b2e(puVar12,uVar13,uVar10,0xffffffff);
      if (iVar5 != 0) {
        if ((uVar13 & 0x100) == 0) {
LAB_ram_4800305c:
          if (aiStack_5c[0] < local_80) {
            uVar14 = uVar7;
            local_80 = aiStack_5c[0];
          }
        }
        else if ((*puVar12 & 4) == 0) {
          if (uVar14 == 0xffffffff) goto LAB_ram_4800305c;
        }
        else {
          iVar5 = 0;
          for (uVar11 = puVar12[2]; uVar11 != 0; uVar11 = *(uint *)(uVar11 + 0x14)) {
            iVar5 = iVar5 + 1;
          }
          if ((iVar5 < iStack_64) || (aiStack_5c[0] < local_80)) {
            local_80 = aiStack_5c[0];
            uVar14 = uVar7;
            iStack_64 = iVar5;
          }
        }
      }
      uVar7 = uVar7 + 1;
      puVar12 = DAT_ram_4ff6d9c8;
    } while (uVar7 != 0x20);
    if (uVar14 == 0xffffffff) goto LAB_ram_48002ea8;
  }
LAB_ram_480030e2:
  puVar6 = (ushort *)FUN_ram_48002bf4(uVar14,uVar10);
  if (puVar6 == (ushort *)0x0) {
LAB_ram_4800308e:
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
    thunk_FUN_ram_4ff209c6(puVar3);
    return 0x101;
  }
  if ((param_2 & 0x100) != 0) {
    puVar12 = (uint *)FUN_ram_4ff206d8(0x18,0x804);
    if (puVar12 == (uint *)0x0) goto LAB_ram_4800308e;
    memset(puVar12,0,0x18);
    uVar13 = *(uint *)(puVar6 + 4);
    *puVar12 = *puVar12 & 0xfffe0001 | (param_1 & 0xffff) << 1;
    uVar9 = *puVar6;
    puVar12[1] = param_3;
    puVar12[2] = param_4;
    puVar12[3] = param_5;
    puVar12[5] = uVar13;
    puVar12[4] = param_6;
    *puVar6 = uVar9 | 4;
    *(uint **)(puVar6 + 4) = puVar12;
    if (0x1f < uVar14) {
LAB_ram_48003390:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_cpu.h",0x1b3,"esp_cpu_intr_set_handler",
                       "intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM");
    }
    FUN_ram_481a9ed4(uVar14,FUN_ram_4ff20c76,puVar6);
    uVar9 = *puVar6;
    goto LAB_ram_48003120;
  }
  uVar9 = 8;
  *puVar6 = 8;
  if (param_5 == 0) {
    if ((param_2 & 0x200) != 0) {
      if (0x1f < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_cpu.h",0x207,"esp_cpu_intr_edge_ack",
                         "intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM");
      }
LAB_ram_480031e8:
      puVar12 = (uint *)((uVar14 + 0x8200410) * 4);
      *puVar12 = *puVar12 | 1;
    }
  }
  else {
    if (0x1f < uVar14) goto LAB_ram_48003390;
    FUN_ram_481a9ed4(uVar14,param_5,param_6);
    uVar9 = *puVar6;
    if ((param_2 & 0x200) != 0) goto LAB_ram_480031e8;
  }
  puVar6[2] = (ushort)param_1;
LAB_ram_48003120:
  uVar13 = 1 << (uVar14 & 0x1f);
  if ((param_2 & 0x400) == 0) {
    uVar9 = uVar9 & 0xfffd;
    uVar7 = *(uint *)(&DAT_ram_4ff6d9c0 + uVar10 * 4) | uVar13;
  }
  else {
    uVar9 = uVar9 | 2;
    uVar7 = ~uVar13 & *(uint *)(&DAT_ram_4ff6d9c0 + uVar10 * 4);
  }
  *(uint *)(&DAT_ram_4ff6d9c0 + uVar10 * 4) = uVar7;
  *puVar6 = uVar9;
  if (-1 < (int)param_1) {
    intr_matrix_set(uVar10,param_1,uVar14);
  }
  uVar10 = mstatus;
  uVar4 = *(undefined4 *)(puVar6 + 4);
  *puVar3 = puVar6;
  puVar3[1] = uVar4;
  mstatus = mstatus & 0xfffffff7;
  esprv_intc_int_enable(uVar13);
  mstatus = mstatus | uVar10 & 8;
  if ((int)(param_2 << 0x14) < 0) {
    FUN_ram_4ff20d60(puVar3);
  }
  iVar5 = __ffssi2((int)param_2 >> 1 & 0x7f);
  *puVar6 = *puVar6 | (ushort)(iVar5 << 8);
  if (0x1f < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_cpu.h",0x17a,"esp_cpu_intr_set_priority",
                     "intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM");
  }
  esprv_intc_int_set_priority(uVar14,iVar5);
  if ((param_2 & 0x200) == 0) {
    esprv_intc_int_set_type(uVar14,0);
  }
  else {
    esprv_intc_int_set_type(uVar14,1);
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
  if (param_8 == (undefined4 *)0x0) {
    thunk_FUN_ram_4ff209c6(puVar3);
    return 0;
  }
  *param_8 = puVar3;
  return 0;
}


