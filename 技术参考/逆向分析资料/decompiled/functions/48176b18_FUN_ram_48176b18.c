/* Firmware entry: 0x48176b18 */

undefined4 FUN_ram_48176b18(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffffaf00;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffaf00;
  }
  uVar2 = *param_2;
  *param_1 = (int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 9) {
    if (9 < uVar2) {
      if ((uVar2 != 10) && (uVar2 != 0xb)) {
        return 0xffffaf00;
      }
      iVar1 = thunk_FUN_ram_4817b126(1,0xe0);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      FUN_ram_4817c9fc();
      goto joined_r0x48176b98;
    }
    if (uVar2 == 5) {
      iVar1 = thunk_FUN_ram_4817b126(1,0x68);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      FUN_ram_4817c41a();
      goto joined_r0x48176b98;
    }
    if (uVar2 != 8) {
      if (uVar2 != 3) {
        return 0xffffaf00;
      }
      iVar1 = thunk_FUN_ram_4817b126(1,0x58);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      thunk_EXT_FUN_ram_4fc005e0();
      goto joined_r0x48176b98;
    }
  }
  iVar1 = thunk_FUN_ram_4817b126(1,0x74);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    return 0xffffae80;
  }
  FUN_ram_4817c6ba();
joined_r0x48176b98:
  if (param_3 != 0) {
    iVar1 = thunk_FUN_ram_4817b126(2,*(undefined1 *)((int)param_2 + 5));
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      FUN_ram_48176a1a(param_1);
      return 0xffffae80;
    }
  }
  return 0;
}


