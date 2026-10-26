/* Firmware entry: 0x4807edc0 */

char * FUN_ram_4807edc0(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0xb) {
    return "can_rt_delayed";
  }
  if (param_1 < 0xc) {
    if (param_1 == 6) {
      return "can_input_stale";
    }
    if (6 < param_1) {
      if (param_1 == 9) {
        return "internal_memory_critical";
      }
      if (param_1 != 10) {
        if (param_1 != 7) {
          return "temperature_critical";
        }
        return "can_experiment_persistence_unavailable";
      }
      return "can_recovering";
    }
    if (param_1 == 3) {
      return "fsd_p0_stale";
    }
    if (3 < param_1) {
      if (param_1 != 4) {
        return "can_bus_off";
      }
      return "can_unavailable";
    }
    if (param_1 == 1) {
      return "fsd_p0_settlement_loss";
    }
    if (param_1 == 2) {
      return "can_rt_stale";
    }
  }
  else {
    if (param_1 == 0x10) {
      return "internal_memory_low";
    }
    if (param_1 < 0x11) {
      if (param_1 == 0xe) {
        return "activation_backlog";
      }
      if (param_1 != 0xf) {
        if (param_1 != 0xc) {
          return "can_input_delayed";
        }
        return "fsd_p0_delayed";
      }
      return "temperature_high";
    }
    if (param_1 == 0x13) {
      return "can_latency_recent";
    }
    if (param_1 < 0x14) {
      if (param_1 != 0x11) {
        return "can_loss_recent";
      }
      return "fsd_p0_loss_recent";
    }
    if (param_1 == 0x14) {
      return "persistence_failure_recent";
    }
  }
  return "ok";
}


