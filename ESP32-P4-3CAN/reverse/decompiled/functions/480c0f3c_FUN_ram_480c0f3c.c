/* Firmware entry: 0x480c0f3c */

char FUN_ram_480c0f3c(uint *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined *puVar9;
  char *pcVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_e30 [511];
  undefined1 uStack_633;
  undefined1 uStack_632;
  undefined1 local_630;
  undefined1 local_62e;
  undefined1 local_62d;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar14 = local_e30;
  uVar5 = FUN_ram_48025ba6();
  if ((*(char *)(DAT_ram_4ff6de38 + 0x720) == '\0') ||
     (piVar3 = (int *)(DAT_ram_4ff6de38 + 0x728), 999 < uVar5 - *(int *)(DAT_ram_4ff6de38 + 0x724)))
  {
    piVar3 = (int *)FUN_ram_48082b62(uVar5);
  }
  iVar2 = DAT_ram_4ff6de38;
  uVar15 = *(undefined4 *)(DAT_ram_4ff6de38 + 0xb14);
  uVar16 = *(undefined4 *)(DAT_ram_4ff6de38 + 0xb24);
  uVar17 = *(undefined4 *)(DAT_ram_4ff6de38 + 0xb28);
  if (((char)param_1[10] == '\0') || (param_1[3] != 0)) {
LAB_ram_480c0fba:
    *(undefined1 *)(param_1 + 10) = 0;
    iVar6 = FUN_ram_4808c696(param_1,"healthModelVersion");
    if (iVar6 == 0) goto LAB_ram_480c0fd0;
LAB_ram_480c10dc:
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481cb8cc);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,1);
    if (iVar6 != 0) goto LAB_ram_480c0fd0;
    *(undefined1 *)(param_1 + 10) = 0;
    iVar6 = FUN_ram_4808c696(param_1,"modelVersion");
  }
  else {
    uVar13 = param_1[2];
    if ((param_1[1] < uVar13) || (param_1[1] - uVar13 < 2)) goto LAB_ram_480c0fba;
    *(undefined1 *)(*param_1 + uVar13) = 0x7b;
    uVar13 = param_1[2];
    param_1[2] = uVar13 + 1;
    *(undefined1 *)(uVar13 + 1 + *param_1) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[3] = 1;
    iVar6 = FUN_ram_4808c696(param_1,"healthModelVersion");
    if (iVar6 != 0) goto LAB_ram_480c10dc;
LAB_ram_480c0fd0:
    iVar6 = FUN_ram_4808c696(param_1,"modelVersion");
  }
  if (iVar6 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481cb8cc);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,1);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_480b2068(param_1,"assessmentSeq",*piVar3);
  FUN_ram_480b2068(param_1,"capturedAtMs",piVar3[1]);
  if ((char)DAT_ram_4ff5c83f < '\0') {
    puVar4 = &DAT_ram_4ff5c830;
    uVar13 = DAT_ram_4ff5c83f & 0x7f;
  }
  else {
    puVar4 = DAT_ram_4ff5c830;
    uVar13 = 0;
    if (DAT_ram_4ff5c830 != (undefined4 *)0x0) {
      uVar13 = DAT_ram_4ff5c838;
    }
  }
  FUN_ram_4808c96e(param_1,"bootSessionId",puVar4,uVar13);
  FUN_ram_480bb6fa(param_1,"level",(char)piVar3[2]);
  bVar1 = *(byte *)((int)piVar3 + 9);
  uVar12 = 0xb;
  if (bVar1 == 0xb) {
    pcVar10 = "can_rt_delayed";
    uVar12 = 0xe;
  }
  else if (bVar1 < 0xc) {
    if (bVar1 == 6) {
      pcVar10 = "can_input_stale";
      uVar12 = 0xf;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        pcVar10 = "fsd_p0_stale";
        uVar12 = 0xc;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          pcVar10 = "fsd_p0_settlement_loss";
          uVar12 = 0x16;
        }
        else {
          uVar12 = 2;
          if (bVar1 == 2) {
            pcVar10 = "can_rt_stale";
            uVar12 = 0xc;
          }
          else {
            pcVar10 = "ok";
          }
        }
      }
      else if (bVar1 == 4) {
        pcVar10 = "can_unavailable";
        uVar12 = 0xf;
      }
      else {
        pcVar10 = "can_bus_off";
      }
    }
    else if (bVar1 == 9) {
      pcVar10 = "internal_memory_critical";
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      pcVar10 = "can_recovering";
      uVar12 = 0xe;
    }
    else if (bVar1 == 7) {
      pcVar10 = "can_experiment_persistence_unavailable";
      uVar12 = 0x26;
    }
    else {
      pcVar10 = "temperature_critical";
      uVar12 = 0x14;
    }
  }
  else {
    uVar12 = 0x10;
    if (bVar1 == 0x10) {
      pcVar10 = "internal_memory_low";
      uVar12 = 0x13;
    }
    else if (bVar1 < 0x11) {
      if (bVar1 == 0xe) {
        pcVar10 = "activation_backlog";
        uVar12 = 0x12;
      }
      else if (bVar1 == 0xf) {
        pcVar10 = "temperature_high";
      }
      else if (bVar1 == 0xc) {
        uVar12 = 0xe;
        pcVar10 = "fsd_p0_delayed";
      }
      else {
        pcVar10 = "can_input_delayed";
        uVar12 = 0x11;
      }
    }
    else if (bVar1 == 0x13) {
      pcVar10 = "can_latency_recent";
      uVar12 = 0x12;
    }
    else if (bVar1 < 0x14) {
      if (bVar1 == 0x11) {
        pcVar10 = "fsd_p0_loss_recent";
        uVar12 = 0x12;
      }
      else {
        pcVar10 = "can_loss_recent";
        uVar12 = 0xf;
      }
    }
    else if (bVar1 == 0x14) {
      pcVar10 = "persistence_failure_recent";
      uVar12 = 0x1a;
    }
    else {
      pcVar10 = "ok";
      uVar12 = 2;
    }
  }
  FUN_ram_4808c96e(param_1,"reason",pcVar10,uVar12);
  bVar1 = *(byte *)((int)piVar3 + 9);
  if (bVar1 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
    uVar12 = 0x1b;
  }
  else if (bVar1 < 0xc) {
    uVar12 = 6;
    if (bVar1 == 6) {
      puVar9 = &DAT_ram_481c4e08;
      uVar12 = 0x18;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        puVar9 = &DAT_ram_481c4dac;
        uVar12 = 0x21;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          puVar9 = &DAT_ram_481c4d50;
          uVar12 = 0x3c;
        }
        else if (bVar1 == 2) {
          puVar9 = &DAT_ram_481c4d90;
          uVar12 = 0x18;
        }
        else {
          puVar9 = &DAT_ram_481c4fec;
        }
      }
      else if (bVar1 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
        uVar12 = 0x21;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
        uVar12 = 0x13;
      }
    }
    else if (bVar1 == 9) {
      puVar9 = &DAT_ram_481c4e48;
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      puVar9 = &DAT_ram_481c4e80;
      uVar12 = 0x18;
    }
    else if (bVar1 == 7) {
      puVar9 = &DAT_ram_481c4e24;
      uVar12 = 0x21;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
      uVar12 = 0x18;
    }
  }
  else if (bVar1 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
    uVar12 = 0x12;
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
      uVar12 = 0x25;
    }
    else if (bVar1 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
      uVar12 = 0x12;
    }
    else if (bVar1 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
      uVar12 = 0x24;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
      uVar12 = 0x15;
    }
  }
  else if (bVar1 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
    uVar12 = 0x21;
  }
  else if (bVar1 < 0x14) {
    if (bVar1 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
      uVar12 = 0x2d;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
      uVar12 = 0x2a;
    }
  }
  else if (bVar1 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
    uVar12 = 0x21;
  }
  else {
    puVar9 = &DAT_ram_481c4fec;
    uVar12 = 6;
  }
  FUN_ram_4808c96e(param_1,"reasonText",puVar9,uVar12);
  FUN_ram_480bb6fa(param_1,"rawLevel",*(undefined1 *)((int)piVar3 + 10));
  bVar1 = *(byte *)((int)piVar3 + 0xb);
  uVar12 = 0xb;
  if (bVar1 == 0xb) {
    pcVar10 = "can_rt_delayed";
    uVar12 = 0xe;
  }
  else if (bVar1 < 0xc) {
    if (bVar1 == 6) {
      pcVar10 = "can_input_stale";
      uVar12 = 0xf;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        pcVar10 = "fsd_p0_stale";
        uVar12 = 0xc;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          pcVar10 = "fsd_p0_settlement_loss";
          uVar12 = 0x16;
        }
        else {
          uVar12 = 2;
          if (bVar1 == 2) {
            pcVar10 = "can_rt_stale";
            uVar12 = 0xc;
          }
          else {
            pcVar10 = "ok";
          }
        }
      }
      else if (bVar1 == 4) {
        pcVar10 = "can_unavailable";
        uVar12 = 0xf;
      }
      else {
        pcVar10 = "can_bus_off";
      }
    }
    else if (bVar1 == 9) {
      pcVar10 = "internal_memory_critical";
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      pcVar10 = "can_recovering";
      uVar12 = 0xe;
    }
    else if (bVar1 == 7) {
      pcVar10 = "can_experiment_persistence_unavailable";
      uVar12 = 0x26;
    }
    else {
      pcVar10 = "temperature_critical";
      uVar12 = 0x14;
    }
  }
  else {
    uVar12 = 0x10;
    if (bVar1 == 0x10) {
      pcVar10 = "internal_memory_low";
      uVar12 = 0x13;
    }
    else if (bVar1 < 0x11) {
      if (bVar1 == 0xe) {
        pcVar10 = "activation_backlog";
        uVar12 = 0x12;
      }
      else if (bVar1 == 0xf) {
        pcVar10 = "temperature_high";
      }
      else if (bVar1 == 0xc) {
        uVar12 = 0xe;
        pcVar10 = "fsd_p0_delayed";
      }
      else {
        pcVar10 = "can_input_delayed";
        uVar12 = 0x11;
      }
    }
    else if (bVar1 == 0x13) {
      pcVar10 = "can_latency_recent";
      uVar12 = 0x12;
    }
    else if (bVar1 < 0x14) {
      if (bVar1 == 0x11) {
        pcVar10 = "fsd_p0_loss_recent";
        uVar12 = 0x12;
      }
      else {
        pcVar10 = "can_loss_recent";
        uVar12 = 0xf;
      }
    }
    else if (bVar1 == 0x14) {
      pcVar10 = "persistence_failure_recent";
      uVar12 = 0x1a;
    }
    else {
      pcVar10 = "ok";
      uVar12 = 2;
    }
  }
  FUN_ram_4808c96e(param_1,"rawReason",pcVar10,uVar12);
  bVar1 = *(byte *)((int)piVar3 + 0xb);
  if (bVar1 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
    uVar12 = 0x1b;
  }
  else if (bVar1 < 0xc) {
    uVar12 = 6;
    if (bVar1 == 6) {
      puVar9 = &DAT_ram_481c4e08;
      uVar12 = 0x18;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        puVar9 = &DAT_ram_481c4dac;
        uVar12 = 0x21;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          puVar9 = &DAT_ram_481c4d50;
          uVar12 = 0x3c;
        }
        else if (bVar1 == 2) {
          puVar9 = &DAT_ram_481c4d90;
          uVar12 = 0x18;
        }
        else {
          puVar9 = &DAT_ram_481c4fec;
        }
      }
      else if (bVar1 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
        uVar12 = 0x21;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
        uVar12 = 0x13;
      }
    }
    else if (bVar1 == 9) {
      puVar9 = &DAT_ram_481c4e48;
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      puVar9 = &DAT_ram_481c4e80;
      uVar12 = 0x18;
    }
    else if (bVar1 == 7) {
      puVar9 = &DAT_ram_481c4e24;
      uVar12 = 0x21;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
      uVar12 = 0x18;
    }
  }
  else if (bVar1 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
    uVar12 = 0x12;
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
      uVar12 = 0x25;
    }
    else if (bVar1 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
      uVar12 = 0x12;
    }
    else if (bVar1 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
      uVar12 = 0x24;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
      uVar12 = 0x15;
    }
  }
  else if (bVar1 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
    uVar12 = 0x21;
  }
  else if (bVar1 < 0x14) {
    if (bVar1 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
      uVar12 = 0x2d;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
      uVar12 = 0x2a;
    }
  }
  else if (bVar1 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
    uVar12 = 0x21;
  }
  else {
    puVar9 = &DAT_ram_481c4fec;
    uVar12 = 6;
  }
  FUN_ram_4808c96e(param_1,"rawReasonText",puVar9,uVar12);
  FUN_ram_480b2068(param_1,"pendingMs",piVar3[5]);
  if ((char)piVar3[4] == '\x01') {
    pcVar10 = "pending_upgrade";
    uVar12 = 0xf;
  }
  else if ((char)piVar3[4] == '\x02') {
    pcVar10 = "pending_recovery";
    uVar12 = 0x10;
  }
  else {
    pcVar10 = "stable";
    uVar12 = 6;
  }
  FUN_ram_4808c96e(param_1,"transition",pcVar10,uVar12);
  FUN_ram_480bb6fa(param_1,"currentLevel",(char)piVar3[3]);
  bVar1 = *(byte *)((int)piVar3 + 0xd);
  uVar12 = 0xb;
  if (bVar1 == 0xb) {
    pcVar10 = "can_rt_delayed";
    uVar12 = 0xe;
  }
  else if (bVar1 < 0xc) {
    if (bVar1 == 6) {
      pcVar10 = "can_input_stale";
      uVar12 = 0xf;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        pcVar10 = "fsd_p0_stale";
        uVar12 = 0xc;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          pcVar10 = "fsd_p0_settlement_loss";
          uVar12 = 0x16;
        }
        else {
          uVar12 = 2;
          if (bVar1 == 2) {
            pcVar10 = "can_rt_stale";
            uVar12 = 0xc;
          }
          else {
            pcVar10 = "ok";
          }
        }
      }
      else if (bVar1 == 4) {
        pcVar10 = "can_unavailable";
        uVar12 = 0xf;
      }
      else {
        pcVar10 = "can_bus_off";
      }
    }
    else if (bVar1 == 9) {
      pcVar10 = "internal_memory_critical";
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      pcVar10 = "can_recovering";
      uVar12 = 0xe;
    }
    else if (bVar1 == 7) {
      pcVar10 = "can_experiment_persistence_unavailable";
      uVar12 = 0x26;
    }
    else {
      pcVar10 = "temperature_critical";
      uVar12 = 0x14;
    }
  }
  else {
    uVar12 = 0x10;
    if (bVar1 == 0x10) {
      pcVar10 = "internal_memory_low";
      uVar12 = 0x13;
    }
    else if (bVar1 < 0x11) {
      if (bVar1 == 0xe) {
        pcVar10 = "activation_backlog";
        uVar12 = 0x12;
      }
      else if (bVar1 == 0xf) {
        pcVar10 = "temperature_high";
      }
      else if (bVar1 == 0xc) {
        uVar12 = 0xe;
        pcVar10 = "fsd_p0_delayed";
      }
      else {
        pcVar10 = "can_input_delayed";
        uVar12 = 0x11;
      }
    }
    else if (bVar1 == 0x13) {
      pcVar10 = "can_latency_recent";
      uVar12 = 0x12;
    }
    else if (bVar1 < 0x14) {
      if (bVar1 == 0x11) {
        pcVar10 = "fsd_p0_loss_recent";
        uVar12 = 0x12;
      }
      else {
        pcVar10 = "can_loss_recent";
        uVar12 = 0xf;
      }
    }
    else if (bVar1 == 0x14) {
      pcVar10 = "persistence_failure_recent";
      uVar12 = 0x1a;
    }
    else {
      pcVar10 = "ok";
      uVar12 = 2;
    }
  }
  FUN_ram_4808c96e(param_1,"currentReason",pcVar10,uVar12);
  bVar1 = *(byte *)((int)piVar3 + 0xd);
  if (bVar1 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
    uVar12 = 0x1b;
  }
  else if (bVar1 < 0xc) {
    uVar12 = 6;
    if (bVar1 == 6) {
      puVar9 = &DAT_ram_481c4e08;
      uVar12 = 0x18;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        puVar9 = &DAT_ram_481c4dac;
        uVar12 = 0x21;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          puVar9 = &DAT_ram_481c4d50;
          uVar12 = 0x3c;
        }
        else if (bVar1 == 2) {
          puVar9 = &DAT_ram_481c4d90;
          uVar12 = 0x18;
        }
        else {
          puVar9 = &DAT_ram_481c4fec;
        }
      }
      else if (bVar1 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
        uVar12 = 0x21;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
        uVar12 = 0x13;
      }
    }
    else if (bVar1 == 9) {
      puVar9 = &DAT_ram_481c4e48;
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      puVar9 = &DAT_ram_481c4e80;
      uVar12 = 0x18;
    }
    else if (bVar1 == 7) {
      puVar9 = &DAT_ram_481c4e24;
      uVar12 = 0x21;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
      uVar12 = 0x18;
    }
  }
  else if (bVar1 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
    uVar12 = 0x12;
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
      uVar12 = 0x25;
    }
    else if (bVar1 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
      uVar12 = 0x12;
    }
    else if (bVar1 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
      uVar12 = 0x24;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
      uVar12 = 0x15;
    }
  }
  else if (bVar1 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
    uVar12 = 0x21;
  }
  else if (bVar1 < 0x14) {
    if (bVar1 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
      uVar12 = 0x2d;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
      uVar12 = 0x2a;
    }
  }
  else if (bVar1 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
    uVar12 = 0x21;
  }
  else {
    puVar9 = &DAT_ram_481c4fec;
    uVar12 = 6;
  }
  FUN_ram_4808c96e(param_1,"currentReasonText",puVar9,uVar12);
  FUN_ram_480bb6fa(param_1,"recentLevel",*(undefined1 *)((int)piVar3 + 0xe));
  bVar1 = *(byte *)((int)piVar3 + 0xf);
  uVar12 = 0xb;
  if (bVar1 == 0xb) {
    pcVar10 = "can_rt_delayed";
    uVar12 = 0xe;
  }
  else if (bVar1 < 0xc) {
    if (bVar1 == 6) {
      pcVar10 = "can_input_stale";
      uVar12 = 0xf;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        pcVar10 = "fsd_p0_stale";
        uVar12 = 0xc;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          pcVar10 = "fsd_p0_settlement_loss";
          uVar12 = 0x16;
        }
        else {
          uVar12 = 2;
          if (bVar1 == 2) {
            pcVar10 = "can_rt_stale";
            uVar12 = 0xc;
          }
          else {
            pcVar10 = "ok";
          }
        }
      }
      else if (bVar1 == 4) {
        pcVar10 = "can_unavailable";
        uVar12 = 0xf;
      }
      else {
        pcVar10 = "can_bus_off";
      }
    }
    else if (bVar1 == 9) {
      pcVar10 = "internal_memory_critical";
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      pcVar10 = "can_recovering";
      uVar12 = 0xe;
    }
    else if (bVar1 == 7) {
      pcVar10 = "can_experiment_persistence_unavailable";
      uVar12 = 0x26;
    }
    else {
      pcVar10 = "temperature_critical";
      uVar12 = 0x14;
    }
  }
  else {
    uVar12 = 0x10;
    if (bVar1 == 0x10) {
      pcVar10 = "internal_memory_low";
      uVar12 = 0x13;
    }
    else if (bVar1 < 0x11) {
      if (bVar1 == 0xe) {
        pcVar10 = "activation_backlog";
        uVar12 = 0x12;
      }
      else if (bVar1 == 0xf) {
        pcVar10 = "temperature_high";
      }
      else if (bVar1 == 0xc) {
        uVar12 = 0xe;
        pcVar10 = "fsd_p0_delayed";
      }
      else {
        pcVar10 = "can_input_delayed";
        uVar12 = 0x11;
      }
    }
    else if (bVar1 == 0x13) {
      pcVar10 = "can_latency_recent";
      uVar12 = 0x12;
    }
    else if (bVar1 < 0x14) {
      if (bVar1 == 0x11) {
        pcVar10 = "fsd_p0_loss_recent";
        uVar12 = 0x12;
      }
      else {
        pcVar10 = "can_loss_recent";
        uVar12 = 0xf;
      }
    }
    else if (bVar1 == 0x14) {
      pcVar10 = "persistence_failure_recent";
      uVar12 = 0x1a;
    }
    else {
      pcVar10 = "ok";
      uVar12 = 2;
    }
  }
  FUN_ram_4808c96e(param_1,"recentReason",pcVar10,uVar12);
  bVar1 = *(byte *)((int)piVar3 + 0xf);
  if (bVar1 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
    uVar12 = 0x1b;
  }
  else if (bVar1 < 0xc) {
    uVar12 = 6;
    if (bVar1 == 6) {
      puVar9 = &DAT_ram_481c4e08;
      uVar12 = 0x18;
    }
    else if (bVar1 < 7) {
      if (bVar1 == 3) {
        puVar9 = &DAT_ram_481c4dac;
        uVar12 = 0x21;
      }
      else if (bVar1 < 4) {
        if (bVar1 == 1) {
          puVar9 = &DAT_ram_481c4d50;
          uVar12 = 0x3c;
        }
        else if (bVar1 == 2) {
          puVar9 = &DAT_ram_481c4d90;
          uVar12 = 0x18;
        }
        else {
          puVar9 = &DAT_ram_481c4fec;
        }
      }
      else if (bVar1 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
        uVar12 = 0x21;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
        uVar12 = 0x13;
      }
    }
    else if (bVar1 == 9) {
      puVar9 = &DAT_ram_481c4e48;
      uVar12 = 0x18;
    }
    else if (bVar1 == 10) {
      puVar9 = &DAT_ram_481c4e80;
      uVar12 = 0x18;
    }
    else if (bVar1 == 7) {
      puVar9 = &DAT_ram_481c4e24;
      uVar12 = 0x21;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
      uVar12 = 0x18;
    }
  }
  else if (bVar1 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
    uVar12 = 0x12;
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
      uVar12 = 0x25;
    }
    else if (bVar1 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
      uVar12 = 0x12;
    }
    else if (bVar1 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
      uVar12 = 0x24;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
      uVar12 = 0x15;
    }
  }
  else if (bVar1 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
    uVar12 = 0x21;
  }
  else if (bVar1 < 0x14) {
    if (bVar1 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
      uVar12 = 0x2d;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
      uVar12 = 0x2a;
    }
  }
  else if (bVar1 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
    uVar12 = 0x21;
  }
  else {
    puVar9 = &DAT_ram_481c4fec;
    uVar12 = 6;
  }
  FUN_ram_4808c96e(param_1,"recentReasonText",puVar9,uVar12);
  FUN_ram_480b2068(param_1,"recentRemainingMs",piVar3[6]);
  FUN_ram_4808c2dc(param_1,"historyHasEvents",(char)piVar3[7]);
  iVar6 = FUN_ram_4808c696(param_1,"historyP0LossCount");
  if (iVar6 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar12 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,uVar12);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"historyP1LossCount");
  if (iVar6 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar12 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,uVar12);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"historyLatencyCount");
  if (iVar6 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar12 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,uVar12);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"historyPersistenceFailureCount");
  if (iVar6 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar12 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,local_e30,uVar12);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_4808c2dc(param_1,"p0Latched",*(undefined1 *)((int)piVar3 + 0x1d));
  if (*piVar3 == *(int *)(DAT_ram_4ff6de38 + 0xb90)) {
    local_e30[1] = DAT_ram_4ff6de38 + 0xb90;
    local_e30[0] = DAT_ram_4ff6de38 + 0xbd0;
    FUN_ram_4808c7bc(param_1,"inputEvidence");
    FUN_ram_480b97f2(local_e30,param_1);
    FUN_ram_4808c244(param_1);
  }
  cVar11 = DAT_ram_4ff6ddd0;
  FUN_ram_4808c2dc(param_1,"tempValid",DAT_ram_4ff6ddd0);
  if (cVar11 == '\0') {
    iVar6 = FUN_ram_4808c696(param_1,"tempLevel");
    if (iVar6 != 0) goto LAB_ram_480c1868;
LAB_ram_480c20d8:
    if ((char)DAT_ram_4ff5c687 < '\0') {
      puVar4 = &DAT_ram_4ff5c678;
      uVar13 = DAT_ram_4ff5c687 & 0x7f;
    }
    else {
      puVar4 = DAT_ram_4ff5c678;
      uVar13 = 0;
      if (DAT_ram_4ff5c678 != (undefined4 *)0x0) {
        uVar13 = DAT_ram_4ff5c680;
      }
    }
    FUN_ram_4808c96e(param_1,"temperatureError",puVar4,uVar13);
  }
  else {
    iVar6 = FUN_ram_4808c696(param_1,"tempLevel");
    if (iVar6 != 0) {
LAB_ram_480c1868:
      local_e30[0] = 0;
      local_e30[1] = 0;
      local_e30[2] = 0;
      local_e30[3] = 0;
      local_e30[4] = 0;
      local_e30[5] = 0;
      local_e30[6] = 0;
      local_e30[7] = 0;
      FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481cb8cc);
      if ((char)param_1[10] == '\0') {
LAB_ram_480c18a0:
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        uVar13 = param_1[2];
        if ((param_1[1] < uVar13) || (param_1[1] - uVar13 < 2)) goto LAB_ram_480c18a0;
        *(undefined1 *)(*param_1 + uVar13) = (undefined1)local_e30[0];
        uVar13 = param_1[2];
        param_1[2] = uVar13 + 1;
        *(undefined1 *)(uVar13 + 1 + *param_1) = 0;
      }
      if (DAT_ram_4ff6ddd0 == '\0') goto LAB_ram_480c20d8;
    }
    iVar6 = FUN_ram_4808c696(param_1,"chipTempCx10");
    if (iVar6 != 0) {
      local_e30[0] = 0;
      local_e30[1] = 0;
      local_e30[2] = 0;
      local_e30[3] = 0;
      local_e30[4] = 0;
      local_e30[5] = 0;
      local_e30[6] = 0;
      local_e30[7] = 0;
      uVar12 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481cb8cc);
      iVar6 = FUN_ram_4808c90a(param_1,local_e30,uVar12);
      if (iVar6 == 0) {
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  FUN_ram_480b2068(param_1,"freeHeap",uVar15);
  FUN_ram_480b2068(param_1,"freePsram",*(undefined4 *)(DAT_ram_4ff6de38 + 0xb18));
  FUN_ram_480b2068(param_1,"uptime",uVar5 / 1000);
  FUN_ram_480b2068(param_1,"canRtLastSeenAgeMs",uVar16);
  FUN_ram_480b2068(param_1,"fsdP0LastSeenAgeMs",uVar17);
  iVar6 = FUN_ram_481a759a();
  iVar7 = FUN_ram_4808c696(param_1,"lastResetReason");
  if (iVar7 != 0) {
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar5 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481cb8cc,local_e30,iVar6,iVar6 >> 0x1f);
    if ((char)param_1[10] != '\0') {
      uVar13 = param_1[2];
      if ((uVar13 <= param_1[1]) && (uVar5 < param_1[1] - uVar13)) {
        FUN_ram_4ff45158(*param_1 + uVar13,local_e30,uVar5);
        uVar13 = param_1[2];
        param_1[2] = uVar5 + uVar13;
        *(undefined1 *)(*param_1 + uVar5 + uVar13) = 0;
        goto LAB_ram_480c19d2;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480c19d2:
  pcVar10 = (char *)FUN_ram_4802c25c(iVar6);
  sVar8 = strlen(pcVar10);
  FUN_ram_4808c96e(param_1,"lastResetReasonText",pcVar10,sVar8);
  FUN_ram_480b2068(param_1,"fsdP0ObservationDropCount",*(undefined4 *)(DAT_ram_4ff6de38 + 0xb2c));
  FUN_ram_480b2068(param_1,"fsdP0SourceStaleDropCount",*(undefined4 *)(DAT_ram_4ff6de38 + 0xb30));
  FUN_ram_480b2068(param_1,"fsdP0ObservationStaleDropCount",
                   *(undefined4 *)(DAT_ram_4ff6de38 + 0xb34));
  FUN_ram_4808c2dc(param_1,"fsdP0SettlementFault",*(undefined1 *)(DAT_ram_4ff6de38 + 0xb38));
  fence();
  FUN_ram_480b2068(param_1,"pendingPersistenceMask",DAT_ram_4ff6de94);
  FUN_ram_480b2068(param_1,"persistenceWriteCount",DAT_ram_4ff6de88);
  FUN_ram_480b2068(param_1,"persistenceFailureCount",DAT_ram_4ff6de84);
  FUN_ram_480b2068(param_1,"persistenceDeferredCount",DAT_ram_4ff6de80);
  fence();
  fence();
  FUN_ram_4808c2dc(param_1,"flashSafeLease",DAT_ram_4ff6deb4 != '\0');
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar6 = FUN_ram_4808c696(param_1,"canExperimentPersistence"), iVar6 == 0 ||
      ((char)param_1[10] == '\0')))) {
LAB_ram_480c1b48:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1b48;
    *(undefined1 *)(*param_1 + uVar5) = 0x7b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  FUN_ram_4808c2dc(param_1,"initialized",*(undefined1 *)(iVar2 + 0xb3c));
  FUN_ram_4808c2dc(param_1,"initializationOk",*(undefined1 *)(iVar2 + 0xb3d));
  FUN_ram_480b2068(param_1,"pendingMask",*(undefined4 *)(iVar2 + 0xb40));
  FUN_ram_480bb6fa(param_1,"pendingCount",*(undefined1 *)(iVar2 + 0xb44));
  FUN_ram_480b2068(param_1,"writeCount",*(undefined4 *)(iVar2 + 0xb48));
  FUN_ram_480b2068(param_1,"failureCount",*(undefined4 *)(iVar2 + 0xb4c));
  if ((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
     ((*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0' ||
      ((iVar6 = FUN_ram_4808c696(param_1,"generation"), iVar6 == 0 || ((char)param_1[10] == '\0'))))
     )) {
LAB_ram_480c1c2c:
    *(undefined1 *)(param_1 + 10) = 0;
    cVar11 = '\0';
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1c2c;
    *(undefined1 *)(*param_1 + uVar5) = 0x5b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    cVar11 = (char)param_1[10];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 0;
    param_1[3] = uVar5 + 1;
  }
  puVar4 = (undefined4 *)(iVar2 + 0xb50);
  do {
    uVar15 = *puVar4;
    if (((cVar11 == '\0') || (param_1[3] == 0)) ||
       (iVar6 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar6 + 0x1c) != '\0'))
    goto LAB_ram_480c1dc8;
    uVar5 = (uint)*(byte *)(iVar6 + 0x10);
    if (uVar5 == 0) {
      uVar5 = param_1[2];
      if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1dc8;
      *(undefined1 *)(*param_1 + uVar5) = 0x2c;
      uVar13 = param_1[2];
      uVar5 = *param_1;
      param_1[2] = uVar13 + 1;
      *(undefined1 *)(uVar13 + 1 + uVar5) = 0;
      iVar6 = (param_1[3] - 1) + (int)param_1;
    }
    *(undefined1 *)(iVar6 + 0x10) = 0;
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar5 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4,uVar5,uVar15,0);
    if ((char)param_1[10] == '\0') goto LAB_ram_480c1dc8;
    uVar13 = param_1[2];
    if ((param_1[1] < uVar13) || (param_1[1] - uVar13 <= uVar5)) goto LAB_ram_480c1dc8;
    FUN_ram_4ff45158(*param_1 + uVar13,local_e30,uVar5);
    uVar13 = param_1[2];
    puVar4 = puVar4 + 1;
    param_1[2] = uVar5 + uVar13;
    *(undefined1 *)(*param_1 + uVar5 + uVar13) = 0;
    cVar11 = (char)param_1[10];
  } while (puVar4 != (undefined4 *)(iVar2 + 0xb70));
  if (((cVar11 == '\0') || (param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) goto LAB_ram_480c1dda;
  uVar5 = param_1[2];
  if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1dda;
  *(undefined1 *)(*param_1 + uVar5) = 0x5d;
  uVar5 = param_1[2];
  param_1[2] = uVar5 + 1;
  *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
  uVar5 = param_1[3];
  param_1[3] = uVar5 - 1;
  if (((((char)param_1[10] == '\0') ||
       ((10 < uVar5 - 2 || (*(char *)((int)param_1 + uVar5 + 0x1a) == '\0')))) ||
      (iVar6 = FUN_ram_4808c696(param_1,"persistedGeneration"), iVar6 == 0)) ||
     ((char)param_1[10] == '\0')) goto LAB_ram_480c1dda;
  uVar5 = param_1[2];
  if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1dda;
  *(undefined1 *)(*param_1 + uVar5) = 0x5b;
  uVar5 = param_1[2];
  param_1[2] = uVar5 + 1;
  *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
  uVar5 = param_1[3];
  cVar11 = (char)param_1[10];
  *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 0;
  param_1[3] = uVar5 + 1;
LAB_ram_480c1de0:
  puVar4 = (undefined4 *)(iVar2 + 0xb70);
  do {
    uVar15 = *puVar4;
    if (((cVar11 == '\0') || (param_1[3] == 0)) ||
       (iVar6 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar6 + 0x1c) != '\0'))
    goto LAB_ram_480c1f36;
    uVar5 = (uint)*(byte *)(iVar6 + 0x10);
    if (uVar5 == 0) {
      uVar5 = param_1[2];
      if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_480c1f36;
      *(undefined1 *)(*param_1 + uVar5) = 0x2c;
      uVar13 = param_1[2];
      uVar5 = *param_1;
      param_1[2] = uVar13 + 1;
      *(undefined1 *)(uVar13 + 1 + uVar5) = 0;
      iVar6 = (param_1[3] - 1) + (int)param_1;
    }
    *(undefined1 *)(iVar6 + 0x10) = 0;
    local_e30[0] = 0;
    local_e30[1] = 0;
    local_e30[2] = 0;
    local_e30[3] = 0;
    local_e30[4] = 0;
    local_e30[5] = 0;
    local_e30[6] = 0;
    local_e30[7] = 0;
    uVar5 = FUN_ram_4819ad74(local_e30,0x20,&DAT_ram_481c48f4,uVar5,uVar15,0);
    if ((char)param_1[10] == '\0') goto LAB_ram_480c1f36;
    uVar13 = param_1[2];
    if ((param_1[1] < uVar13) || (param_1[1] - uVar13 <= uVar5)) goto LAB_ram_480c1f36;
    FUN_ram_4ff45158(*param_1 + uVar13,local_e30,uVar5);
    uVar13 = param_1[2];
    puVar4 = puVar4 + 1;
    param_1[2] = uVar5 + uVar13;
    *(undefined1 *)(*param_1 + uVar5 + uVar13) = 0;
    cVar11 = (char)param_1[10];
  } while ((undefined4 *)(iVar2 + 0xb90) != puVar4);
  if (((cVar11 != '\0') && (1 < param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) {
    uVar5 = param_1[2];
    if ((uVar5 <= param_1[1]) && (1 < param_1[1] - uVar5)) {
      *(undefined1 *)(*param_1 + uVar5) = 0x5d;
      uVar5 = param_1[2];
      param_1[2] = uVar5 + 1;
      *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
      uVar13 = param_1[3];
      uVar5 = uVar13 - 1;
      param_1[3] = uVar5;
      if (((char)param_1[10] != '\0') &&
         ((1 < uVar5 && (*(char *)((int)param_1 + uVar13 + 0x1a) != '\0')))) {
        uVar5 = param_1[2];
        if ((uVar5 <= param_1[1]) && (1 < param_1[1] - uVar5)) {
          *(undefined1 *)(*param_1 + uVar5) = 0x7d;
          uVar5 = param_1[2];
          param_1[2] = uVar5 + 1;
          *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
          param_1[3] = param_1[3] - 1;
          goto LAB_ram_480c1f44;
        }
      }
    }
  }
LAB_ram_480c1f40:
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480c1f44:
  FUN_ram_4ff3ec14(&DAT_ram_4ff61940,0xffffffff);
  puVar4 = &DAT_ram_4ff61a00;
  do {
    uVar15 = puVar4[1];
    uVar16 = puVar4[2];
    uVar17 = puVar4[3];
    *piVar14 = *puVar4;
    piVar14[1] = uVar15;
    piVar14[2] = uVar16;
    piVar14[3] = uVar17;
    puVar4 = puVar4 + 4;
    piVar14 = piVar14 + 4;
  } while (puVar4 != (undefined4 *)&DAT_ram_4ff62800);
  FUN_ram_4ff3ee10(&DAT_ram_4ff61940);
  FUN_ram_480b21d6(param_1,&DAT_ram_481ce954,iVar2 + 0x768,*(undefined1 *)(iVar2 + 0xb04),
                   *(undefined4 *)(iVar2 + 0xb08));
  FUN_ram_480b21d6(param_1,&DAT_ram_481ce95c,iVar2 + 0x89c,*(undefined1 *)(iVar2 + 0xb05),
                   *(undefined4 *)(iVar2 + 0xb0c));
  FUN_ram_480b21d6(param_1,&DAT_ram_481ce964,iVar2 + 0x9d0,*(undefined1 *)(iVar2 + 0xb06),
                   *(undefined4 *)(iVar2 + 0xb10));
  FUN_ram_480bb6fa(param_1,"hw3FollowDistance",uStack_633);
  FUN_ram_480bb6fa(param_1,"hw3EffectiveStrategy",uStack_632);
  FUN_ram_480bb6fa(param_1,"hw3StrategySource",local_630);
  FUN_ram_480bb6fa(param_1,"v14EffectiveDrivingProfile",local_62e);
  FUN_ram_480bb6fa(param_1,"v14DrivingProfileSource",local_62d);
  if ((((char)param_1[10] != '\0') && (param_1[3] == 1)) &&
     (uVar5 = param_1[7], (char)uVar5 != '\0')) {
    uVar13 = param_1[2];
    if ((uVar13 <= param_1[1]) && (1 < param_1[1] - uVar13)) {
      *(undefined1 *)(*param_1 + uVar13) = 0x7d;
      uVar13 = param_1[2];
      param_1[2] = uVar13 + 1;
      *(undefined1 *)(uVar13 + 1 + *param_1) = 0;
      param_1[3] = 0;
      return (char)uVar5;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
LAB_ram_480c1dc8:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 != (undefined4 *)(iVar2 + 0xb70));
LAB_ram_480c1dda:
  *(undefined1 *)(param_1 + 10) = 0;
  cVar11 = '\0';
  goto LAB_ram_480c1de0;
LAB_ram_480c1f36:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 != (undefined4 *)(iVar2 + 0xb90));
  goto LAB_ram_480c1f40;
}


