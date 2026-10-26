/* Firmware entry: 0x4803b2ec */

void FUN_ram_4803b2ec(undefined4 param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"healthModelVersion");
  FUN_ram_4802a970(&uStack_38,2,10);
  FUN_ram_4802ae48(param_1,&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f022(param_1,"modelVersion");
  FUN_ram_4802a970(&uStack_38,2,10);
  FUN_ram_4802ae48(param_1,&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f278(param_1,"assessmentSeq",*param_2);
  FUN_ram_4802f278(param_1,"capturedAtMs",param_2[1]);
  FUN_ram_4802f236(param_1,"bootSessionId",&DAT_ram_4ff5c830);
  FUN_ram_4802f07e(param_1,"level",(char)param_2[2]);
  bVar2 = *(byte *)((int)param_2 + 9);
  if (bVar2 == 0xb) {
    pcVar8 = "can_rt_delayed";
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      pcVar8 = "can_input_stale";
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        pcVar8 = "fsd_p0_stale";
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          pcVar8 = "fsd_p0_settlement_loss";
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd0e;
          pcVar8 = "can_rt_stale";
        }
      }
      else if (bVar2 == 4) {
        pcVar8 = "can_unavailable";
      }
      else {
        pcVar8 = "can_bus_off";
      }
    }
    else if (bVar2 == 9) {
      pcVar8 = "internal_memory_critical";
    }
    else if (bVar2 == 10) {
      pcVar8 = "can_recovering";
    }
    else if (bVar2 == 7) {
      pcVar8 = "can_experiment_persistence_unavailable";
    }
    else {
      pcVar8 = "temperature_critical";
    }
  }
  else if (bVar2 == 0x10) {
    pcVar8 = "internal_memory_low";
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      pcVar8 = "activation_backlog";
    }
    else if (bVar2 == 0xf) {
      pcVar8 = "temperature_high";
    }
    else if (bVar2 == 0xc) {
      pcVar8 = "fsd_p0_delayed";
    }
    else {
      pcVar8 = "can_input_delayed";
    }
  }
  else if (bVar2 == 0x13) {
    pcVar8 = "can_latency_recent";
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      pcVar8 = "fsd_p0_loss_recent";
    }
    else {
      pcVar8 = "can_loss_recent";
    }
  }
  else if (bVar2 == 0x14) {
    pcVar8 = "persistence_failure_recent";
  }
  else {
LAB_ram_4803bd0e:
    pcVar8 = "ok";
  }
  FUN_ram_4802a8a8(&uStack_38,pcVar8);
  FUN_ram_4802f236(param_1,"reason",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  bVar2 = *(byte *)((int)param_2 + 9);
  if (bVar2 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      puVar9 = &DAT_ram_481c4e08;
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        puVar9 = &DAT_ram_481c4dac;
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          puVar9 = &DAT_ram_481c4d50;
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd02;
          puVar9 = &DAT_ram_481c4d90;
        }
      }
      else if (bVar2 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
      }
    }
    else if (bVar2 == 9) {
      puVar9 = &DAT_ram_481c4e48;
    }
    else if (bVar2 == 10) {
      puVar9 = &DAT_ram_481c4e80;
    }
    else if (bVar2 == 7) {
      puVar9 = &DAT_ram_481c4e24;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
    }
  }
  else if (bVar2 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
    }
    else if (bVar2 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
    }
    else if (bVar2 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
    }
  }
  else if (bVar2 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
    }
  }
  else if (bVar2 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
  }
  else {
LAB_ram_4803bd02:
    puVar9 = &DAT_ram_481c4fec;
  }
  FUN_ram_4802a8a8(&uStack_38,puVar9);
  FUN_ram_4802f236(param_1,"reasonText",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f07e(param_1,"rawLevel",*(undefined1 *)((int)param_2 + 10));
  bVar2 = *(byte *)((int)param_2 + 0xb);
  if (bVar2 == 0xb) {
    pcVar8 = "can_rt_delayed";
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      pcVar8 = "can_input_stale";
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        pcVar8 = "fsd_p0_stale";
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          pcVar8 = "fsd_p0_settlement_loss";
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd30;
          pcVar8 = "can_rt_stale";
        }
      }
      else if (bVar2 == 4) {
        pcVar8 = "can_unavailable";
      }
      else {
        pcVar8 = "can_bus_off";
      }
    }
    else if (bVar2 == 9) {
      pcVar8 = "internal_memory_critical";
    }
    else if (bVar2 == 10) {
      pcVar8 = "can_recovering";
    }
    else if (bVar2 == 7) {
      pcVar8 = "can_experiment_persistence_unavailable";
    }
    else {
      pcVar8 = "temperature_critical";
    }
  }
  else if (bVar2 == 0x10) {
    pcVar8 = "internal_memory_low";
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      pcVar8 = "activation_backlog";
    }
    else if (bVar2 == 0xf) {
      pcVar8 = "temperature_high";
    }
    else if (bVar2 == 0xc) {
      pcVar8 = "fsd_p0_delayed";
    }
    else {
      pcVar8 = "can_input_delayed";
    }
  }
  else if (bVar2 == 0x13) {
    pcVar8 = "can_latency_recent";
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      pcVar8 = "fsd_p0_loss_recent";
    }
    else {
      pcVar8 = "can_loss_recent";
    }
  }
  else if (bVar2 == 0x14) {
    pcVar8 = "persistence_failure_recent";
  }
  else {
LAB_ram_4803bd30:
    pcVar8 = "ok";
  }
  FUN_ram_4802a8a8(&uStack_38,pcVar8);
  FUN_ram_4802f236(param_1,"rawReason",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  bVar2 = *(byte *)((int)param_2 + 0xb);
  if (bVar2 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      puVar9 = &DAT_ram_481c4e08;
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        puVar9 = &DAT_ram_481c4dac;
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          puVar9 = &DAT_ram_481c4d50;
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd24;
          puVar9 = &DAT_ram_481c4d90;
        }
      }
      else if (bVar2 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
      }
    }
    else if (bVar2 == 9) {
      puVar9 = &DAT_ram_481c4e48;
    }
    else if (bVar2 == 10) {
      puVar9 = &DAT_ram_481c4e80;
    }
    else if (bVar2 == 7) {
      puVar9 = &DAT_ram_481c4e24;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
    }
  }
  else if (bVar2 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
    }
    else if (bVar2 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
    }
    else if (bVar2 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
    }
  }
  else if (bVar2 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
    }
  }
  else if (bVar2 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
  }
  else {
LAB_ram_4803bd24:
    puVar9 = &DAT_ram_481c4fec;
  }
  FUN_ram_4802a8a8(&uStack_38,puVar9);
  FUN_ram_4802f236(param_1,"rawReasonText",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f278(param_1,"pendingMs",param_2[5]);
  if ((char)param_2[4] == '\x01') {
    pcVar8 = "pending_upgrade";
  }
  else if ((char)param_2[4] == '\x02') {
    pcVar8 = "pending_recovery";
  }
  else {
    pcVar8 = "stable";
  }
  FUN_ram_4802a8a8(&uStack_38,pcVar8);
  FUN_ram_4802f236(param_1,"transition",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f07e(param_1,"currentLevel",(char)param_2[3]);
  bVar2 = *(byte *)((int)param_2 + 0xd);
  if (bVar2 == 0xb) {
    pcVar8 = "can_rt_delayed";
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      pcVar8 = "can_input_stale";
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        pcVar8 = "fsd_p0_stale";
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          pcVar8 = "fsd_p0_settlement_loss";
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd46;
          pcVar8 = "can_rt_stale";
        }
      }
      else if (bVar2 == 4) {
        pcVar8 = "can_unavailable";
      }
      else {
        pcVar8 = "can_bus_off";
      }
    }
    else if (bVar2 == 9) {
      pcVar8 = "internal_memory_critical";
    }
    else if (bVar2 == 10) {
      pcVar8 = "can_recovering";
    }
    else if (bVar2 == 7) {
      pcVar8 = "can_experiment_persistence_unavailable";
    }
    else {
      pcVar8 = "temperature_critical";
    }
  }
  else if (bVar2 == 0x10) {
    pcVar8 = "internal_memory_low";
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      pcVar8 = "activation_backlog";
    }
    else if (bVar2 == 0xf) {
      pcVar8 = "temperature_high";
    }
    else if (bVar2 == 0xc) {
      pcVar8 = "fsd_p0_delayed";
    }
    else {
      pcVar8 = "can_input_delayed";
    }
  }
  else if (bVar2 == 0x13) {
    pcVar8 = "can_latency_recent";
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      pcVar8 = "fsd_p0_loss_recent";
    }
    else {
      pcVar8 = "can_loss_recent";
    }
  }
  else if (bVar2 == 0x14) {
    pcVar8 = "persistence_failure_recent";
  }
  else {
LAB_ram_4803bd46:
    pcVar8 = "ok";
  }
  FUN_ram_4802a8a8(&uStack_38,pcVar8);
  FUN_ram_4802f236(param_1,"currentReason",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  bVar2 = *(byte *)((int)param_2 + 0xd);
  if (bVar2 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      puVar9 = &DAT_ram_481c4e08;
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        puVar9 = &DAT_ram_481c4dac;
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          puVar9 = &DAT_ram_481c4d50;
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd3c;
          puVar9 = &DAT_ram_481c4d90;
        }
      }
      else if (bVar2 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
      }
    }
    else if (bVar2 == 9) {
      puVar9 = &DAT_ram_481c4e48;
    }
    else if (bVar2 == 10) {
      puVar9 = &DAT_ram_481c4e80;
    }
    else if (bVar2 == 7) {
      puVar9 = &DAT_ram_481c4e24;
    }
    else {
      puVar9 = &DAT_ram_481c4e64;
    }
  }
  else if (bVar2 == 0x10) {
    puVar9 = &DAT_ram_481c4f4c;
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      puVar9 = &DAT_ram_481c4ef8;
    }
    else if (bVar2 == 0xf) {
      puVar9 = &DAT_ram_481c4f90;
    }
    else if (bVar2 == 0xc) {
      puVar9 = &DAT_ram_481c4eb8;
    }
    else {
      puVar9 = &DAT_ram_481c4ee0;
    }
  }
  else if (bVar2 == 0x13) {
    puVar9 = &DAT_ram_481c4fa4;
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      puVar9 = &DAT_ram_481c4f60;
    }
    else {
      puVar9 = &DAT_ram_481c4f20;
    }
  }
  else if (bVar2 == 0x14) {
    puVar9 = &DAT_ram_481c4fc8;
  }
  else {
LAB_ram_4803bd3c:
    puVar9 = &DAT_ram_481c4fec;
  }
  FUN_ram_4802a8a8(&uStack_38,puVar9);
  FUN_ram_4802f236(param_1,"currentReasonText",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f07e(param_1,"recentLevel",*(undefined1 *)((int)param_2 + 0xe));
  bVar2 = *(byte *)((int)param_2 + 0xf);
  if (bVar2 == 0xb) {
    pcVar8 = "can_rt_delayed";
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      pcVar8 = "can_input_stale";
    }
    else if (bVar2 < 7) {
      if (bVar2 == 3) {
        pcVar8 = "fsd_p0_stale";
      }
      else if (bVar2 < 4) {
        if (bVar2 == 1) {
          pcVar8 = "fsd_p0_settlement_loss";
        }
        else {
          if (bVar2 != 2) goto LAB_ram_4803bd50;
          pcVar8 = "can_rt_stale";
        }
      }
      else if (bVar2 == 4) {
        pcVar8 = "can_unavailable";
      }
      else {
        pcVar8 = "can_bus_off";
      }
    }
    else if (bVar2 == 9) {
      pcVar8 = "internal_memory_critical";
    }
    else if (bVar2 == 10) {
      pcVar8 = "can_recovering";
    }
    else if (bVar2 == 7) {
      pcVar8 = "can_experiment_persistence_unavailable";
    }
    else {
      pcVar8 = "temperature_critical";
    }
  }
  else if (bVar2 == 0x10) {
    pcVar8 = "internal_memory_low";
  }
  else if (bVar2 < 0x11) {
    if (bVar2 == 0xe) {
      pcVar8 = "activation_backlog";
    }
    else if (bVar2 == 0xf) {
      pcVar8 = "temperature_high";
    }
    else if (bVar2 == 0xc) {
      pcVar8 = "fsd_p0_delayed";
    }
    else {
      pcVar8 = "can_input_delayed";
    }
  }
  else if (bVar2 == 0x13) {
    pcVar8 = "can_latency_recent";
  }
  else if (bVar2 < 0x14) {
    if (bVar2 == 0x11) {
      pcVar8 = "fsd_p0_loss_recent";
    }
    else {
      pcVar8 = "can_loss_recent";
    }
  }
  else if (bVar2 == 0x14) {
    pcVar8 = "persistence_failure_recent";
  }
  else {
LAB_ram_4803bd50:
    pcVar8 = "ok";
  }
  FUN_ram_4802a8a8(&uStack_38,pcVar8);
  FUN_ram_4802f236(param_1,"recentReason",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  bVar2 = *(byte *)((int)param_2 + 0xf);
  if (bVar2 == 0xb) {
    puVar9 = &DAT_ram_481c4e9c;
    goto LAB_ram_4803b7f4;
  }
  if (bVar2 < 0xc) {
    if (bVar2 == 6) {
      puVar9 = &DAT_ram_481c4e08;
      goto LAB_ram_4803b7f4;
    }
    if (6 < bVar2) {
      if (bVar2 == 9) {
        puVar9 = &DAT_ram_481c4e48;
      }
      else if (bVar2 == 10) {
        puVar9 = &DAT_ram_481c4e80;
      }
      else if (bVar2 == 7) {
        puVar9 = &DAT_ram_481c4e24;
      }
      else {
        puVar9 = &DAT_ram_481c4e64;
      }
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 == 3) {
      puVar9 = &DAT_ram_481c4dac;
      goto LAB_ram_4803b7f4;
    }
    if (3 < bVar2) {
      if (bVar2 == 4) {
        puVar9 = &DAT_ram_481c4dd0;
      }
      else {
        puVar9 = &DAT_ram_481c4df4;
      }
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 == 1) {
      puVar9 = &DAT_ram_481c4d50;
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 == 2) {
      puVar9 = &DAT_ram_481c4d90;
      goto LAB_ram_4803b7f4;
    }
  }
  else {
    if (bVar2 == 0x10) {
      puVar9 = &DAT_ram_481c4f4c;
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 < 0x11) {
      if (bVar2 == 0xe) {
        puVar9 = &DAT_ram_481c4ef8;
      }
      else if (bVar2 == 0xf) {
        puVar9 = &DAT_ram_481c4f90;
      }
      else if (bVar2 == 0xc) {
        puVar9 = &DAT_ram_481c4eb8;
      }
      else {
        puVar9 = &DAT_ram_481c4ee0;
      }
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 == 0x13) {
      puVar9 = &DAT_ram_481c4fa4;
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 < 0x14) {
      if (bVar2 == 0x11) {
        puVar9 = &DAT_ram_481c4f60;
      }
      else {
        puVar9 = &DAT_ram_481c4f20;
      }
      goto LAB_ram_4803b7f4;
    }
    if (bVar2 == 0x14) {
      puVar9 = &DAT_ram_481c4fc8;
      goto LAB_ram_4803b7f4;
    }
  }
  puVar9 = &DAT_ram_481c4fec;
LAB_ram_4803b7f4:
  FUN_ram_4802a8a8(&uStack_38,puVar9);
  FUN_ram_4802f236(param_1,"recentReasonText",&uStack_38);
  FUN_ram_4802a59e(&uStack_38);
  FUN_ram_4802f278(param_1,"recentRemainingMs",param_2[6]);
  iVar11 = param_2[7];
  FUN_ram_4802f022(param_1,"historyHasEvents");
  if ((char)iVar11 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar8);
  uStack_38 = 0;
  FUN_ram_4819ad74(&uStack_38,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(param_1,"historyP0LossCount");
  FUN_ram_4802af2c(param_1,&uStack_38);
  uStack_38 = 0;
  FUN_ram_4819ad74(&uStack_38,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(param_1,"historyP1LossCount");
  FUN_ram_4802af2c(param_1,&uStack_38);
  uStack_38 = 0;
  FUN_ram_4819ad74(&uStack_38,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(param_1,"historyLatencyCount");
  FUN_ram_4802af2c(param_1,&uStack_38);
  uStack_38 = 0;
  FUN_ram_4819ad74(&uStack_38,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(param_1,"historyPersistenceFailureCount");
  FUN_ram_4802af2c(param_1,&uStack_38);
  cVar3 = *(char *)((int)param_2 + 0x1d);
  FUN_ram_4802f022(param_1,"p0Latched");
  if (cVar3 == '\0') {
    FUN_ram_4802af2c(param_1,"false");
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
  }
  if (param_3 == 0) {
    if (*param_2 != *(int *)(DAT_ram_4ff6de38 + 0xb90)) {
      return;
    }
    param_3 = DAT_ram_4ff6de38 + 0xb90;
  }
  FUN_ram_4802a8a8(auStack_78,&DAT_ram_481c4164);
  cVar3 = *(char *)(param_3 + 0x44);
  FUN_ram_4802f022(auStack_78,"runtimeReady");
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(auStack_78,pcVar8);
  cVar3 = *(char *)(param_3 + 0x45);
  FUN_ram_4802f022(auStack_78,"canActive");
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(auStack_78,pcVar8);
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  FUN_ram_4802f022(auStack_78,"canRtAgeMs");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0x58);
  FUN_ram_4802f022(auStack_78,"fsdP0AgeMs");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  cVar3 = *(char *)(param_3 + 0x46);
  FUN_ram_4802f022(auStack_78,"temperatureValid");
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(auStack_78,pcVar8);
  uVar5 = *(undefined4 *)(param_3 + 0x48);
  FUN_ram_4802f022(auStack_78,"temperatureCx10");
  FUN_ram_4802aa00(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0x4c);
  FUN_ram_4802f022(auStack_78,"internalTotal");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0x50);
  FUN_ram_4802f022(auStack_78,"internalFree");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  cVar3 = *(char *)(param_3 + 0x5c);
  FUN_ram_4802f022(auStack_78,"p0SettlementFault");
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(auStack_78,pcVar8);
  cVar3 = *(char *)(param_3 + 0x5d);
  FUN_ram_4802f022(auStack_78,"persistenceReady");
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(auStack_78,pcVar8);
  uVar5 = *(undefined4 *)(param_3 + 0xf8);
  FUN_ram_4802f022(auStack_78,"pendingPersistenceMask");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0xfc);
  FUN_ram_4802f022(auStack_78,"persistenceWriteCount");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0x100);
  FUN_ram_4802f022(auStack_78,"persistenceFailureCount");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uVar5 = *(undefined4 *)(param_3 + 0x104);
  FUN_ram_4802f022(auStack_78,"persistenceDeferredCount");
  FUN_ram_4802aa44(&uStack_58,uVar5,10);
  FUN_ram_4802ae48(auStack_78,&uStack_58);
  FUN_ram_4802a59e(&uStack_58);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_ram_4819ad74(&uStack_58,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(auStack_78,"p0Loss");
  FUN_ram_4802af2c(auStack_78,&uStack_58);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_ram_4819ad74(&uStack_58,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(auStack_78,"p1Loss");
  FUN_ram_4802af2c(auStack_78,&uStack_58);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_ram_4819ad74(&uStack_58,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(auStack_78,"p1Latency");
  FUN_ram_4802af2c(auStack_78,&uStack_58);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_ram_4819ad74(&uStack_58,0x18,&DAT_ram_481c48f4);
  FUN_ram_4802f022(auStack_78,"persistenceFailures");
  FUN_ram_4802af2c(auStack_78,&uStack_58);
  FUN_ram_4802f022(auStack_78,"taskTimes");
  FUN_ram_4802af5a(auStack_78,0x5b);
  FUN_ram_4802a8a8(auStack_68,&DAT_ram_481c4164);
  puVar6 = (undefined4 *)(param_3 + 0xd4);
  iVar11 = 0x7e0;
  bVar4 = false;
  while( true ) {
    FUN_ram_4802a8a8(&uStack_58,"[FATAL] OTA terminal rollback retry (%s): %s\n" + iVar11 + 0x18);
    FUN_ram_4802f236(auStack_68,&DAT_ram_481c4938,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = puVar6[1];
    FUN_ram_4802f022(auStack_68,"lastSeenAtUs");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = *puVar6;
    FUN_ram_4802f022(auStack_68,"sampledAtUs");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = puVar6[2];
    FUN_ram_4802f022(auStack_68,&DAT_ram_481c495c);
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    FUN_ram_4802af5a(auStack_68,0x7d);
    FUN_ram_4802ae48(auStack_78,auStack_68);
    FUN_ram_4802a59e(auStack_68);
    puVar6 = puVar6 + 3;
    if (bVar4) break;
    FUN_ram_4802af5a(auStack_78,0x2c);
    FUN_ram_4802a8a8(auStack_68,&DAT_ram_481c4164);
    iVar11 = 0x7e8;
    bVar4 = true;
  }
  FUN_ram_4802af5a(auStack_78,0x5d);
  FUN_ram_4802f022(auStack_78,"buses");
  pcVar8 = (char *)(param_3 + 0x60);
  puVar12 = (undefined4 *)(param_3 + 0xec);
  FUN_ram_4802af5a(auStack_78,0x5b);
  puVar6 = (undefined4 *)(param_3 + 0xb0);
  puVar10 = &DAT_ram_481f5494;
  iVar11 = 0;
  while( true ) {
    FUN_ram_4802a8a8(auStack_68,&DAT_ram_481c4164);
    uVar1 = *puVar10;
    FUN_ram_4802f022(auStack_68,"bus");
    FUN_ram_4802a928(&uStack_58,uVar1,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    cVar3 = *pcVar8;
    FUN_ram_4802f022(auStack_68,"known");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    cVar3 = pcVar8[1];
    FUN_ram_4802f022(auStack_68,"available");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    cVar3 = pcVar8[2];
    FUN_ram_4802f022(auStack_68,"running");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    cVar3 = pcVar8[3];
    FUN_ram_4802f022(auStack_68,"recovering");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    cVar3 = pcVar8[4];
    FUN_ram_4802f022(auStack_68,"busOff");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    cVar3 = pcVar8[5];
    FUN_ram_4802f022(auStack_68,"userDisabled");
    pcVar7 = "false";
    if (cVar3 != '\0') {
      pcVar7 = "true";
    }
    FUN_ram_4802af2c(auStack_68,pcVar7);
    uVar5 = *(undefined4 *)(pcVar8 + 8);
    FUN_ram_4802f022(auStack_68,"rawAgeMs");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = *(undefined4 *)(pcVar8 + 0xc);
    FUN_ram_4802f022(auStack_68,"activationQueueDepth");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = *puVar12;
    FUN_ram_4802f022(auStack_68,"rxCount");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = puVar6[1];
    FUN_ram_4802f022(auStack_68,"lastRxAtUs");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    uVar5 = *puVar6;
    FUN_ram_4802f022(auStack_68,"sampledAtUs");
    FUN_ram_4802aa44(&uStack_58,uVar5,10);
    FUN_ram_4802ae48(auStack_68,&uStack_58);
    FUN_ram_4802a59e(&uStack_58);
    FUN_ram_4802af5a(auStack_68,0x7d);
    FUN_ram_4802ae48(auStack_78,auStack_68);
    FUN_ram_4802a59e(auStack_68);
    iVar11 = iVar11 + 1;
    pcVar8 = pcVar8 + 0x10;
    puVar12 = puVar12 + 1;
    puVar6 = puVar6 + 3;
    puVar10 = puVar10 + 1;
    if (iVar11 == 3) break;
    FUN_ram_4802af5a(auStack_78,0x2c);
  }
  FUN_ram_4802af5a(auStack_78,0x5d);
  FUN_ram_4802af5a(auStack_78,0x7d);
  FUN_ram_4802f022(param_1,"inputEvidence");
  FUN_ram_4802ae48(param_1,auStack_78);
  FUN_ram_4802a59e(auStack_78);
  return;
}


