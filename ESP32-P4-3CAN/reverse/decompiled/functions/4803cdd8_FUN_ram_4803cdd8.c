/* Firmware entry: 0x4803cdd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4803cdd8(uint param_1,ushort *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ushort uVar9;
  code *pcVar10;
  ushort *puVar11;
  byte bVar12;
  char *pcVar13;
  ushort *puStack_d0;
  undefined4 uStack_c8;
  ushort *local_c4;
  ushort local_be;
  ushort *puStack_bc;
  ushort **ppuStack_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort ***pppuStack_68;
  undefined4 uStack_64;
  ushort **ppuStack_60;
  ushort **ppuStack_5c;
  undefined4 *puStack_58;
  ushort *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df38 == '\0') {
    uVar5 = 0;
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    uVar5 = param_1;
    if (param_1 == 0) goto LAB_ram_4803ce24;
  }
  DAT_ram_4ff6dc28 = 0;
LAB_ram_4803ce24:
  puStack_d0 = &local_be;
  local_be = 0;
  ppuStack_b8 = &local_c4;
  bVar3 = false;
  bVar2 = false;
  bVar12 = 0;
  uStack_c8 = param_3;
  local_c4 = param_2;
  puStack_bc = puStack_d0;
  do {
    puVar11 = local_c4;
    if (local_c4 != (ushort *)0x0) {
      uVar9 = *local_c4;
      if (uVar9 < 8) {
LAB_ram_4803d000:
        return (uint)local_be;
      }
      if (*(code **)(local_c4 + 2) != (code *)0x0) {
        iVar6 = (**(code **)(local_c4 + 2))(uVar5);
        if (*(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4))) goto LAB_ram_4803d000;
        uVar9 = *puVar11;
      }
      *puVar11 = uVar9 - 8;
    }
    uStack_b0 = DAT_ram_48222d48;
    uStack_ac = DAT_ram_48222d4c;
    uStack_a8 = DAT_ram_48222d50;
    uStack_a4 = DAT_ram_48222d54;
    iStack_a0 = DAT_ram_48222d58;
    uStack_9c = DAT_ram_48222d5c;
    uStack_98 = DAT_ram_48222d60;
    uStack_94 = DAT_ram_48222d64;
    uStack_90 = DAT_ram_48222d68;
    if (param_1 != 0) {
      if (DAT_ram_4ff6dfd0 == (code *)0x0) {
        if (bVar12 < 8) {
          if (DAT_ram_4ff6dc28 < 8) {
            puVar11 = *ppuStack_b8;
            goto joined_r0x4803d1fa;
          }
          goto LAB_ram_4803ceba;
        }
LAB_ram_4803d200:
        iStack_b4 = 0;
        FUN_ram_48025b94();
      }
      else {
        iVar6 = (*DAT_ram_4ff6dfd0)();
        if (iVar6 != 0) {
          iStack_b4 = 0;
          local_be = local_be + 1;
          FUN_ram_48025b94();
          if (DAT_ram_4ff6dc28 < 8) {
            DAT_ram_4ff6dc28 = DAT_ram_4ff6dc28 + 1;
          }
          goto LAB_ram_4803cf92;
        }
        if (7 < bVar12) goto LAB_ram_4803d200;
        if (DAT_ram_4ff6dc28 < 8) goto LAB_ram_4803cf1a;
LAB_ram_4803ceba:
        iStack_b4 = 0;
        FUN_ram_48025b94();
      }
LAB_ram_4803cebe:
      DAT_ram_4ff6dc28 = '\0';
LAB_ram_4803cec0:
      return (uint)local_be;
    }
    if ((DAT_ram_4ff6dfbc == (code *)0x0) || (iVar6 = (*DAT_ram_4ff6dfbc)(), iVar6 == 0)) {
      if ((DAT_ram_4ff6dfd0 == (code *)0x0) || (iVar6 = (*DAT_ram_4ff6dfd0)(), iVar6 == 0)) {
        if ((bVar12 < 8) && (DAT_ram_4ff6dc28 < 8)) {
LAB_ram_4803cf1a:
          puVar11 = *ppuStack_b8;
joined_r0x4803d1fa:
          if (puVar11 != (ushort *)0x0) {
            pcVar10 = *(code **)(puVar11 + 2);
            bVar1 = false;
            if (pcVar10 != (code *)0x0) goto LAB_ram_4803cf2e;
          }
LAB_ram_4803d236:
          if (DAT_ram_4ff6dc2a == '\0') {
            bVar1 = false;
            goto LAB_ram_4803d268;
          }
          if ((DAT_ram_4ff6dfd4 == (code *)0x0) || (iVar6 = (*DAT_ram_4ff6dfd4)(), iVar6 == 0)) {
LAB_ram_4803d24a:
            puVar11 = *ppuStack_b8;
            if (puVar11 == (ushort *)0x0) {
LAB_ram_4803d25e:
              if (DAT_ram_4ff6dc2a != '\0') {
LAB_ram_4803d266:
                bVar1 = true;
LAB_ram_4803d268:
                pppuStack_68 = (ushort ***)0x0;
                ppuStack_60 = (ushort **)0x0;
                ppuStack_5c = (ushort **)0x0;
                puStack_58 = (undefined4 *)0x0;
                puStack_54 = (ushort *)0x0;
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                uStack_64 = (uint *)0xff;
                uStack_8c = CONCAT31(uStack_8c._1_3_,1);
                iVar6 = FUN_ram_48030752(&uStack_b0,&pppuStack_68,&uStack_8c);
                if (iVar6 == 0) break;
                FUN_ram_4802c5e6(&puStack_bc,&uStack_b0,0,&pppuStack_68,
                                 uStack_8c & 0xff & (param_1 ^ 1));
                DAT_ram_4ff6dc2a = '\x01';
                goto LAB_ram_4803cf6e;
              }
LAB_ram_4803cf4e:
              if ((DAT_ram_4ff6dfd4 == (code *)0x0) || (iVar6 = (*DAT_ram_4ff6dfd4)(), iVar6 == 0))
              goto LAB_ram_4803d29e;
              goto LAB_ram_4803cf60;
            }
            pcVar10 = *(code **)(puVar11 + 2);
            bVar1 = true;
            if (pcVar10 == (code *)0x0) goto LAB_ram_4803d25e;
LAB_ram_4803cf2e:
            iVar6 = (*pcVar10)();
            if (*(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))
            goto LAB_ram_4803d29e;
            if (bVar1) {
              if (DAT_ram_4ff6dc2a == '\0') goto LAB_ram_4803cf4e;
              goto LAB_ram_4803d266;
            }
            goto LAB_ram_4803d236;
          }
LAB_ram_4803cf60:
          DAT_ram_4ff6dc2a = '\0';
          local_be = local_be + 1;
LAB_ram_4803cf6e:
          bVar12 = bVar12 + 1;
          iStack_b4 = 0;
          if (param_1 != 0) {
            FUN_ram_48025b94();
            if (DAT_ram_4ff6dc28 < 8) {
              DAT_ram_4ff6dc28 = DAT_ram_4ff6dc28 + 1;
            }
            goto LAB_ram_4803cf92;
          }
          FUN_ram_48025b94();
          goto LAB_ram_4803cfc8;
        }
LAB_ram_4803d008:
        iStack_b4 = 0;
        puVar11 = *ppuStack_b8;
        if ((((puVar11 == (ushort *)0x0) || (*(code **)(puVar11 + 2) == (code *)0x0)) ||
            (iVar6 = (**(code **)(puVar11 + 2))(),
            (uint)(iVar6 - *(int *)(puVar11 + 4)) < *(uint *)(puVar11 + 6))) &&
           (iVar6 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x70))(DAT_ram_4ff6dfe4,&iStack_b4), iVar6 != 0
           )) {
          iVar6 = FUN_ram_48025b94();
          if ((-1 < iVar6 - iStack_b4) && (9999 < (uint)(iVar6 - iStack_b4))) {
            if ((3 < DAT_ram_4ff6dc2c) || (DAT_ram_4ff6dc2d == '\0')) goto LAB_ram_4803d170;
            goto LAB_ram_4803d04e;
          }
          if (DAT_ram_4ff6dc2c < 4) goto LAB_ram_4803d04e;
LAB_ram_4803d170:
          puVar11 = *ppuStack_b8;
          if ((((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) &&
              (iVar6 = (**(code **)(puVar11 + 2))(),
              *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))) ||
             (iVar6 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x60))(DAT_ram_4ff6dfe4,&uStack_b0,local_c4),
             iVar6 == 0)) goto LAB_ram_4803d04e;
          FUN_ram_4802c5e6(&puStack_bc,&uStack_b0,1,0);
          _DAT_ram_4ff6dc2c = 0x100;
LAB_ram_4803d352:
          DAT_ram_4ff6dc28 = 0;
          goto LAB_ram_4803cf92;
        }
        FUN_ram_48025b94();
        if (3 < DAT_ram_4ff6dc2c) goto LAB_ram_4803d170;
LAB_ram_4803d04e:
        puVar11 = *ppuStack_b8;
        if (((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) &&
           (iVar6 = (**(code **)(puVar11 + 2))(),
           *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))) goto LAB_ram_4803d06e;
        ppuStack_60 = &local_c4;
        pppuStack_68 = &ppuStack_b8;
        uStack_64 = &uStack_b0;
        ppuStack_5c = &puStack_bc;
        puStack_58 = &uStack_c8;
        puStack_54 = puStack_d0;
        if (DAT_ram_4ff6dc29 == 0) {
          if (!bVar2) {
            bVar1 = false;
            goto LAB_ram_4803d55c;
          }
          bVar4 = false;
          if ((bVar3) || (iVar6 = FUN_ram_48035538(&pppuStack_68,6), iVar6 == 0))
          goto LAB_ram_4803d0ea;
LAB_ram_4803d520:
          bVar3 = true;
          DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
LAB_ram_4803d532:
          if (DAT_ram_4ff6dc2c < 4) {
            DAT_ram_4ff6dc2c = DAT_ram_4ff6dc2c + 1;
          }
          _DAT_ram_4ff6dc2c = (ushort)DAT_ram_4ff6dc2c;
          goto LAB_ram_4803d352;
        }
        if (!bVar2) {
          bVar1 = true;
LAB_ram_4803d55c:
          iVar6 = FUN_ram_48035538(&pppuStack_68,4);
          if (iVar6 == 0) {
            if ((!bVar3) && (iVar6 = FUN_ram_48035538(&pppuStack_68,6), iVar6 != 0))
            goto LAB_ram_4803d520;
            bVar4 = true;
            if (bVar1) {
              bVar4 = true;
            }
            goto LAB_ram_4803d0ea;
          }
LAB_ram_4803d59a:
          DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
LAB_ram_4803d5a6:
          bVar2 = true;
          goto LAB_ram_4803d532;
        }
        if (bVar3) {
          bVar4 = false;
        }
        else {
          iVar6 = FUN_ram_48035538(&pppuStack_68,6);
          if (iVar6 != 0) goto LAB_ram_4803d520;
          bVar4 = false;
        }
LAB_ram_4803d0ea:
        iVar6 = FUN_ram_48035538(&pppuStack_68,0);
        if ((iVar6 != 0) || (iVar6 = FUN_ram_48035538(&pppuStack_68,1), iVar6 != 0)) {
          DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
          goto LAB_ram_4803d532;
        }
        if (bVar2) {
          iVar6 = FUN_ram_48035538(&pppuStack_68,5);
          if ((iVar6 != 0) || (iVar6 = FUN_ram_48035538(&pppuStack_68,4), iVar6 != 0))
          goto LAB_ram_4803d59a;
          iVar6 = FUN_ram_48035538(&pppuStack_68,6);
          DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
          if (iVar6 != 0) goto LAB_ram_4803d5a6;
        }
        else {
          pcVar13 = "\x04\x05\x06";
          do {
            cVar7 = *pcVar13;
            if (bVar4) {
              while (cVar7 == '\x04') {
                pcVar13 = pcVar13 + 1;
                if (pcVar13 == "") goto LAB_ram_4803d5b4;
                cVar7 = *pcVar13;
              }
            }
            iVar6 = FUN_ram_48035538(&pppuStack_68);
            if (iVar6 != 0) {
              DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
              goto LAB_ram_4803d532;
            }
            pcVar13 = pcVar13 + 1;
          } while (pcVar13 != "");
LAB_ram_4803d5b4:
          DAT_ram_4ff6dc29 = DAT_ram_4ff6dc29 ^ 1;
        }
LAB_ram_4803d06e:
        puVar11 = *ppuStack_b8;
        if (((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) &&
           (iVar6 = (**(code **)(puVar11 + 2))(),
           *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))) goto LAB_ram_4803d090;
        iVar6 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x60))(DAT_ram_4ff6dfe4,&uStack_b0,local_c4);
        if (iVar6 != 0) {
          iVar6 = iStack_a0;
          if ((uStack_a4._2_1_ == '\0') && (iStack_a0 == 0)) {
            iVar6 = FUN_ram_48025b94();
          }
          uStack_8c = uStack_b0;
          uStack_88 = uStack_ac;
          uStack_80 = uStack_a4;
          uStack_84 = uStack_a8;
          iStack_7c = iStack_a0;
          uStack_78 = uStack_9c;
          uStack_70 = uStack_94;
          pppuStack_68 = (ushort ***)0x0;
          ppuStack_60 = (ushort **)0x0;
          ppuStack_5c = (ushort **)0x0;
          puStack_58 = (undefined4 *)0x0;
          puStack_54 = (ushort *)0x0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_74 = uStack_98;
          uStack_6c = uStack_90;
          uStack_64 = (uint *)0xff;
          if (DAT_ram_4ff6dfd8 == (code *)0x0) {
LAB_ram_4803d358:
            uStack_64._0_3_ = (uint3)(ushort)uStack_64;
            if (DAT_ram_4ff6dfdc != (code *)0x0) {
              (*DAT_ram_4ff6dfdc)(&uStack_8c,DAT_ram_4ff6dfe4);
            }
          }
          else {
            iVar6 = (*DAT_ram_4ff6dfd8)(&uStack_8c,DAT_ram_4ff6dfe4,iVar6,&pppuStack_68);
            if (iVar6 == 0) goto LAB_ram_4803d358;
            uStack_64._0_3_ = CONCAT12(1,(ushort)uStack_64);
            if (DAT_ram_4ff6dfac != (code *)0x0) {
              (*DAT_ram_4ff6dfac)(&uStack_8c,DAT_ram_4ff6dfe4,&pppuStack_68);
            }
          }
          _DAT_ram_4ff6dc2c = 0x100;
          *puStack_bc = *puStack_bc + 1;
          goto LAB_ram_4803d352;
        }
        cVar7 = '\x03';
        do {
          puVar11 = *ppuStack_b8;
          if (((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) &&
             (iVar6 = (**(code **)(puVar11 + 2))(),
             *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))) break;
          uVar5 = (uint)DAT_ram_4ff6dc2e;
          uVar8 = uVar5 + 1;
          DAT_ram_4ff6dc2e =
               (char)uVar8 -
               (((byte)((ulonglong)uVar8 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar8 / 3));
          iVar6 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x34))
                            (DAT_ram_4ff6dfe4,(&DAT_ram_481f54b8)[uVar5],&uStack_b0,
                             *(code **)(*DAT_ram_4ff6dfe4 + 0x34));
          if (iVar6 != 0) {
            iVar6 = iStack_a0;
            if ((uStack_a4._2_1_ == '\0') && (iStack_a0 == 0)) {
              iVar6 = FUN_ram_48025b94();
            }
            uStack_8c = uStack_b0;
            uStack_88 = uStack_ac;
            uStack_80 = uStack_a4;
            uStack_84 = uStack_a8;
            iStack_7c = iStack_a0;
            uStack_78 = uStack_9c;
            uStack_70 = uStack_94;
            pppuStack_68 = (ushort ***)0x0;
            ppuStack_60 = (ushort **)0x0;
            ppuStack_5c = (ushort **)0x0;
            puStack_58 = (undefined4 *)0x0;
            puStack_54 = (ushort *)0x0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            uStack_74 = uStack_98;
            uStack_6c = uStack_90;
            uStack_64 = (uint *)0xff;
            if (DAT_ram_4ff6dfd8 == (code *)0x0) {
LAB_ram_4803d4ec:
              uStack_64._0_3_ = (uint3)(ushort)uStack_64;
              if (DAT_ram_4ff6dfdc != (code *)0x0) {
                (*DAT_ram_4ff6dfdc)(&uStack_8c,DAT_ram_4ff6dfe4);
              }
            }
            else {
              iVar6 = (*DAT_ram_4ff6dfd8)(&uStack_8c,DAT_ram_4ff6dfe4,iVar6,&pppuStack_68);
              if (iVar6 == 0) goto LAB_ram_4803d4ec;
              uStack_64._0_3_ = CONCAT12(1,(ushort)uStack_64);
              if (DAT_ram_4ff6dfac != (code *)0x0) {
                (*DAT_ram_4ff6dfac)(&uStack_8c,DAT_ram_4ff6dfe4,&pppuStack_68);
              }
            }
            *puStack_bc = *puStack_bc + 1;
            goto LAB_ram_4803d352;
          }
          cVar7 = cVar7 + -1;
        } while (cVar7 != '\0');
        if ((7 < bVar12) ||
           (((puVar11 = *ppuStack_b8, puVar11 != (ushort *)0x0 &&
             (*(code **)(puVar11 + 2) != (code *)0x0)) &&
            (iVar6 = (**(code **)(puVar11 + 2))(),
            *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))))) {
LAB_ram_4803d090:
          puVar11 = *ppuStack_b8;
          if ((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) {
            iVar6 = (**(code **)(puVar11 + 2))();
            DAT_ram_4ff6dc28 =
                 (*(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4))) << 3;
            goto LAB_ram_4803cec0;
          }
          goto LAB_ram_4803cebe;
        }
        pppuStack_68 = (ushort ***)0x0;
        ppuStack_60 = (ushort **)0x0;
        ppuStack_5c = (ushort **)0x0;
        puStack_58 = (undefined4 *)0x0;
        puStack_54 = (ushort *)0x0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_64 = (uint *)0xff;
        uStack_8c = CONCAT31(uStack_8c._1_3_,1);
        iVar6 = FUN_ram_48030752(&uStack_b0,&pppuStack_68,&uStack_8c);
        if (iVar6 == 0) goto LAB_ram_4803d090;
        FUN_ram_4802c5e6(&puStack_bc,&uStack_b0,0,&pppuStack_68,uStack_8c & 0xff);
        if (DAT_ram_4ff6dc28 < 8) {
          DAT_ram_4ff6dc28 = DAT_ram_4ff6dc28 + 1;
        }
        bVar12 = bVar12 + 1;
      }
      else {
        iStack_b4 = 0;
        local_be = local_be + 1;
        FUN_ram_48025b94();
LAB_ram_4803cfc8:
        if (DAT_ram_4ff6dc28 < 8) {
          DAT_ram_4ff6dc28 = DAT_ram_4ff6dc28 + 1;
        }
      }
      puVar11 = *ppuStack_b8;
      if (((puVar11 != (ushort *)0x0) && (*(code **)(puVar11 + 2) != (code *)0x0)) &&
         (iVar6 = (**(code **)(puVar11 + 2))(),
         *(uint *)(puVar11 + 6) <= (uint)(iVar6 - *(int *)(puVar11 + 4)))) {
        DAT_ram_4ff6dc28 = 8;
      }
    }
    else {
      local_be = local_be + 1;
    }
LAB_ram_4803cf92:
    uVar5 = (uint)local_be;
    if (0x1f < uVar5) {
      return uVar5;
    }
  } while( true );
  if (bVar1) {
LAB_ram_4803d29e:
    if (param_1 != 0) goto LAB_ram_4803ceba;
    bVar12 = 8;
    goto LAB_ram_4803d008;
  }
  goto LAB_ram_4803d24a;
}


