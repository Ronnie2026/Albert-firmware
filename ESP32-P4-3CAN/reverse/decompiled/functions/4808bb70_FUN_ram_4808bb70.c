/* Firmware entry: 0x4808bb70 */

uint FUN_ram_4808bb70(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_3 == 0) || (iVar7 = *param_1, iVar7 == 0)) || (uVar6 = param_1[2], uVar6 == 0)) {
    return 0;
  }
  if ((char)param_1[8] == '\0') {
    uVar13 = param_1[4];
    if (uVar13 < 0x10) {
      uVar6 = 0x10 - uVar13;
      if (param_3 < 0x10 - uVar13) {
        uVar6 = param_3;
      }
      iVar7 = (int)param_1 + uVar13 + 0x112;
    }
    else {
      uVar13 = uVar13 - 0x10;
      if (param_1[1] * 0x13 == uVar13) {
        return 0;
      }
      uVar9 = param_1[1] * 0x13 - uVar13;
      uVar3 = (uVar13 / 0x13 + param_1[3]) % uVar6;
      uVar6 = (uVar6 - uVar3) * 0x13 - uVar13 % 0x13;
      if (uVar9 <= param_3) {
        param_3 = uVar9;
      }
      if (param_3 < uVar6) {
        uVar6 = param_3;
      }
      iVar7 = uVar3 * 0x13 + uVar13 % 0x13 + iVar7;
    }
    FUN_ram_4ff45158(param_2,iVar7,uVar6);
    param_1[4] = param_1[4] + uVar6;
    return uVar6;
  }
  iVar5 = param_1[6];
  if (iVar5 != param_1[5]) {
    uVar6 = param_1[5] - iVar5;
    goto LAB_ram_4808bba2;
  }
  param_1[6] = 0;
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    FUN_ram_4ff45158((int)param_1 + 0x22,
                     "format_version,timestamp_us,timestamp_valid,event,dir,bus,logical_bus,controller,id_hex,id,dlc,tx_ok,b0,b1,b2,b3,b4,b5,b6,b7\r\n"
                     ,0x7f);
    uVar6 = 0x7e;
    param_1[5] = 0x7e;
    iVar5 = 0;
    goto LAB_ram_4808bba2;
  }
  iVar5 = param_1[7];
  if (iVar5 == param_1[1]) {
    return 0;
  }
  param_1[7] = iVar5 + 1;
  puVar4 = (undefined4 *)(((uint)(iVar5 + param_1[3]) % uVar6) * 0x13 + iVar7);
  bVar1 = *(byte *)((int)puVar4 + 10);
  cVar2 = *(char *)(puVar4 + 2);
  if (cVar2 == '\x01') {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 1) == 0) {
        pcVar12 = "CH";
        pcVar10 = "rx";
        iVar5 = 1;
        uVar11 = 0x52;
        uVar6 = 0;
        iVar7 = 0;
        uVar13 = 0xffffffff;
      }
      else {
        uVar6 = 0;
LAB_ram_4808be6c:
        bVar8 = bVar1 >> 3 & 7;
        if (bVar8 == 4) {
          pcVar12 = "CH";
          pcVar10 = "terminalOk";
          iVar5 = 1;
          iVar7 = 0;
LAB_ram_4808be40:
          uVar13 = (int)(uint)bVar1 >> 1 & 1;
          uVar11 = 0x54;
        }
        else {
          if (bVar8 < 5) {
            if (bVar8 == 2) {
              pcVar10 = "controllerAccepted";
            }
            else if (bVar8 == 3) {
              pcVar10 = "submitRejected";
            }
            else {
              if (bVar8 != 1) goto LAB_ram_4808c106;
              pcVar10 = "submitted";
            }
          }
          else {
            if (bVar8 == 5) {
              pcVar12 = "CH";
              pcVar10 = "terminalFail";
              iVar5 = 1;
              iVar7 = 0;
              goto LAB_ram_4808be40;
            }
            if (bVar8 == 6) {
              pcVar10 = "terminalUnknown";
            }
            else {
LAB_ram_4808c106:
              pcVar10 = "legacy";
            }
          }
          pcVar12 = "CH";
          iVar5 = 1;
          uVar11 = 0x54;
          iVar7 = 0;
          uVar13 = 0xffffffff;
        }
      }
    }
    else {
      if ((bVar1 & 1) != 0) {
        uVar6 = 1;
        goto LAB_ram_4808be6c;
      }
      iVar5 = 1;
      pcVar12 = "CH";
      uVar6 = 1;
      pcVar10 = "rx";
      uVar11 = 0x52;
      iVar7 = 0;
      uVar13 = 0xffffffff;
    }
  }
  else {
    uVar6 = (bVar1 & 4) >> 2;
    if (cVar2 == '\x02') {
      if ((bVar1 & 1) == 0) {
        pcVar12 = "VEH";
        pcVar10 = "rx";
        iVar5 = 2;
        uVar11 = 0x52;
        iVar7 = 1;
        uVar13 = 0xffffffff;
      }
      else {
        iVar7 = 1;
LAB_ram_4808bdec:
        bVar8 = bVar1 >> 3 & 7;
        if (bVar8 == 4) {
          iVar5 = iVar7 + 1;
          if (cVar2 != '\x02') {
            pcVar10 = "terminalOk";
            pcVar12 = "PARTY";
            goto LAB_ram_4808be28;
          }
          pcVar10 = "terminalOk";
          pcVar12 = "VEH";
        }
        else {
          if (bVar8 < 5) {
            if (bVar8 == 2) {
              iVar5 = iVar7 + 1;
              if (cVar2 == '\x02') {
                pcVar10 = "controllerAccepted";
                pcVar12 = "VEH";
                goto LAB_ram_4808be2c;
              }
              pcVar10 = "controllerAccepted";
              pcVar12 = "PARTY";
            }
            else if (bVar8 == 3) {
              iVar5 = iVar7 + 1;
              if (cVar2 == '\x02') {
                pcVar10 = "submitRejected";
                pcVar12 = "VEH";
                goto LAB_ram_4808be2c;
              }
              pcVar10 = "submitRejected";
              pcVar12 = "PARTY";
            }
            else {
              if (bVar8 != 1) {
                if (cVar2 != '\x02') goto LAB_ram_4808c024;
LAB_ram_4808c098:
                iVar5 = iVar7 + 1;
                pcVar12 = "VEH";
                pcVar10 = "legacy";
                uVar11 = 0x54;
                uVar13 = 0xffffffff;
                goto LAB_ram_4808bd30;
              }
              iVar5 = iVar7 + 1;
              if (cVar2 != '\x02') {
                pcVar10 = "submitted";
                goto LAB_ram_4808be20;
              }
              pcVar10 = "submitted";
              pcVar12 = "VEH";
            }
          }
          else if (bVar8 == 5) {
            iVar5 = iVar7 + 1;
            if (cVar2 == '\x02') {
              pcVar10 = "terminalFail";
              pcVar12 = "VEH";
              goto LAB_ram_4808be2c;
            }
            pcVar10 = "terminalFail";
            pcVar12 = "PARTY";
          }
          else if (bVar8 == 6) {
            iVar5 = iVar7 + 1;
            if (cVar2 == '\x02') {
              pcVar10 = "terminalUnknown";
              pcVar12 = "VEH";
              goto LAB_ram_4808be2c;
            }
            pcVar10 = "terminalUnknown";
            pcVar12 = "PARTY";
          }
          else {
            if (cVar2 == '\x02') goto LAB_ram_4808c098;
LAB_ram_4808c024:
            pcVar10 = "legacy";
LAB_ram_4808be20:
            iVar5 = iVar7 + 1;
            pcVar12 = "PARTY";
          }
LAB_ram_4808be28:
          if ((bVar1 & 1) == 0) {
            uVar11 = 0x54;
            uVar13 = 0xffffffff;
            goto LAB_ram_4808bd30;
          }
        }
LAB_ram_4808be2c:
        uVar11 = 0x54;
        uVar13 = 0xffffffff;
        if ((byte)((bVar1 >> 3 & 7) - 4) < 2) goto LAB_ram_4808be40;
      }
    }
    else if (cVar2 == '\x04') {
      if ((bVar1 & 1) != 0) {
        iVar7 = 2;
        goto LAB_ram_4808bdec;
      }
      pcVar12 = "PARTY";
      pcVar10 = "rx";
      iVar5 = 3;
      uVar11 = 0x52;
      iVar7 = 2;
      uVar13 = 0xffffffff;
    }
    else {
      if ((bVar1 & 1) != 0) {
        bVar8 = bVar1 >> 3 & 7;
        if (bVar8 == 4) {
          pcVar10 = "terminalOk";
        }
        else if (bVar8 < 5) {
          if (bVar8 == 2) {
            pcVar10 = "controllerAccepted";
          }
          else if (bVar8 == 3) {
            pcVar10 = "submitRejected";
          }
          else {
            if (bVar8 != 1) goto LAB_ram_4808bffe;
            pcVar10 = "submitted";
          }
        }
        else {
          if (bVar8 != 5) {
            if (bVar8 != 6) {
LAB_ram_4808bffe:
              iVar7 = -1;
              pcVar12 = "ANY";
              uVar13 = 0xffffffff;
              pcVar10 = "legacy";
              iVar5 = 0;
              uVar11 = 0x54;
              goto LAB_ram_4808bd30;
            }
            pcVar10 = "terminalUnknown";
            pcVar12 = "ANY";
            iVar7 = -1;
            iVar5 = 0;
            goto LAB_ram_4808be2c;
          }
          pcVar10 = "terminalFail";
        }
        pcVar12 = "ANY";
        iVar7 = -1;
        iVar5 = 0;
        goto LAB_ram_4808be28;
      }
      iVar7 = -1;
      pcVar12 = "ANY";
      uVar13 = 0xffffffff;
      pcVar10 = "rx";
      iVar5 = 0;
      uVar11 = 0x52;
    }
  }
LAB_ram_4808bd30:
  iVar7 = FUN_ram_4819ad74((int)param_1 + 0x22,0xf0,
                           "2,%lu,%u,%s,%c,%u,%s,TWAI%d,0x%03lX,%lu,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u\r\n"
                           ,*puVar4,uVar6,pcVar10,uVar11,iVar5,pcVar12,iVar7,puVar4[1],puVar4[1],
                           *(undefined1 *)((int)puVar4 + 9),uVar13,
                           *(undefined1 *)((int)puVar4 + 0xb),*(undefined1 *)(puVar4 + 3),
                           *(undefined1 *)((int)puVar4 + 0xd),*(undefined1 *)((int)puVar4 + 0xe),
                           *(undefined1 *)((int)puVar4 + 0xf),*(undefined1 *)(puVar4 + 4),
                           *(undefined1 *)((int)puVar4 + 0x11),*(undefined1 *)((int)puVar4 + 0x12));
  if (0xee < iVar7 - 1U) {
    return 0xffffffff;
  }
  iVar5 = param_1[6];
  param_1[5] = iVar7;
  uVar6 = iVar7 - iVar5;
LAB_ram_4808bba2:
  if (uVar6 < param_3) {
    param_3 = uVar6;
  }
  FUN_ram_4ff45158(param_2,(int)param_1 + iVar5 + 0x22,param_3);
  param_1[6] = param_1[6] + param_3;
  return param_3;
}


