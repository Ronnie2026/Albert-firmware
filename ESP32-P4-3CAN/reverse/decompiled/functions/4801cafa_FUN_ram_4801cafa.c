/* Firmware entry: 0x4801cafa */

int FUN_ram_4801cafa(uint param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 1;
  if (((0xf < param_1) && (iVar1 = 2, 0x7ff < param_1)) && (iVar1 = 3, 0x3ffff < param_1)) {
    iVar1 = (0x1ffffff < param_1) + 4;
  }
  if (param_2 == 9) {
LAB_ram_4801cb7c:
    return iVar1 + 8;
  }
  if (param_2 < 10) {
    if (param_2 == 4) {
      uVar7 = (int)param_3[1] >> 0x1f;
      uVar6 = param_3[1] << 1 | *param_3 >> 0x1f;
      uVar5 = *param_3 << 1 ^ uVar7;
      uVar4 = uVar6 ^ uVar7;
      if (uVar6 == uVar7) {
        if (uVar5 < 0x80) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1 + 1;
        }
        if (uVar5 < 0x4000) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1 + 2;
        }
        if (uVar5 < 0x200000) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1 + 3;
        }
        if (0xfffffff < uVar5) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1 + 5;
        }
      }
      else {
        param_2 = 5;
        if (((7 < uVar4) && (param_2 = 6, 0x3ff < uVar4)) &&
           ((param_2 = 7, 0x1ffff < uVar4 && (param_2 = 8, 0xffffff < uVar4)))) {
          param_2 = ((int)uVar4 < 0) + 9;
        }
      }
LAB_ram_4801cc1e:
      return iVar1 + param_2;
    }
    if (param_2 < 5) {
      if (param_2 == 1) {
        uVar4 = *param_3 << 1 ^ (int)*param_3 >> 0x1f;
        if (((0x7f < uVar4) && (param_2 = 2, 0x3fff < uVar4)) && (param_2 = 3, 0x1fffff < uVar4)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1 + (0xfffffff < uVar4) + 4;
        }
        goto LAB_ram_4801cc1e;
      }
      if (param_2 < 2) goto LAB_ram_4801cce4;
      if (param_2 == 2) {
LAB_ram_4801cb50:
        return iVar1 + 4;
      }
    }
    else {
      if (param_2 == 6) {
        uVar4 = *param_3;
        iVar2 = 1;
        if (((0x7f < uVar4) && (iVar2 = 2, 0x3fff < uVar4)) && (iVar2 = 3, 0x1fffff < uVar4)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return (0xfffffff < uVar4) + 4 + iVar1;
        }
        goto LAB_ram_4801cbcc;
      }
      if (param_2 < 7) goto LAB_ram_4801cb7c;
      if (param_2 == 7) goto LAB_ram_4801cb50;
    }
    uVar6 = param_3[1];
    uVar4 = *param_3;
    if (uVar6 == 0) {
      iVar2 = 1;
      if (((0x7f < uVar4) && (iVar2 = 2, 0x3fff < uVar4)) && (iVar2 = 3, 0x1fffff < uVar4)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return (0xfffffff < uVar4) + 4 + iVar1;
      }
    }
    else {
      iVar2 = 5;
      if ((((7 < uVar6) && (iVar2 = 6, 0x3ff < uVar6)) && (iVar2 = 7, 0x1ffff < uVar6)) &&
         (iVar2 = 8, 0xffffff < uVar6)) {
        iVar2 = ((int)uVar6 < 0) + 9;
      }
    }
  }
  else {
    if (param_2 == 0xe) {
      iVar2 = 1;
      if ((char *)*param_3 != (char *)0x0) {
        sVar3 = strlen((char *)*param_3);
        if (sVar3 < 0x80) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return sVar3 + 1 + iVar1;
        }
        if (sVar3 < 0x4000) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return sVar3 + 2 + iVar1;
        }
        if (sVar3 < 0x200000) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return sVar3 + 3 + iVar1;
        }
        iVar2 = (0xfffffff < sVar3) + sVar3 + 4;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2 + iVar1;
    }
    if (0xe < param_2) {
      if (param_2 == 0xf) {
        uVar4 = *param_3;
        iVar2 = 1;
        if (((0x7f < uVar4) && (iVar2 = 2, 0x3fff < uVar4)) && (iVar2 = 3, 0x1fffff < uVar4)) {
          iVar2 = (0xfffffff < uVar4) + 4;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar4 + iVar1 + iVar2;
      }
      if (param_2 != 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("protobuf-c.c",0x1cb,"required_field_get_packed_size","0");
      }
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1 + 1;
      }
      if (**(int **)*param_3 == 0x28aaeef9) {
        uVar4 = FUN_ram_4801ce78();
        if (uVar4 < 0x80) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return uVar4 + 1 + iVar1;
        }
        if (0x3fff < uVar4) {
          if (0x1fffff < uVar4) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return (0xfffffff < uVar4) + uVar4 + 4 + iVar1;
          }
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return uVar4 + 3 + iVar1;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar4 + 2 + iVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("protobuf-c.c",0x2c9,"protobuf_c_message_get_packed_size",
                       "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
    }
    if (param_2 == 0xc) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 1;
    }
    if (param_2 != 0xd) {
      if (param_2 == 10) goto LAB_ram_4801cb50;
      goto LAB_ram_4801cb7c;
    }
LAB_ram_4801cce4:
    uVar4 = *param_3;
    if ((int)uVar4 < 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1 + 10;
    }
    iVar2 = 1;
    if (((0x7f < (int)uVar4) && (iVar2 = 2, 0x3fff < (int)uVar4)) &&
       (iVar2 = 3, 0x1fffff < (int)uVar4)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (0xfffffff < (int)uVar4) + 4 + iVar1;
    }
  }
LAB_ram_4801cbcc:
  return iVar2 + iVar1;
}


