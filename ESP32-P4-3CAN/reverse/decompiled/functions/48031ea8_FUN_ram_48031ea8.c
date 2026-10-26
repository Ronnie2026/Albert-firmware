/* Firmware entry: 0x48031ea8 */

void FUN_ram_48031ea8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(uint *)(param_1 + 0x580) = param_2;
  *(uint *)(param_1 + 0x578) = param_2;
  *(undefined1 *)(param_1 + 0x5d0) = 1;
  *(undefined4 *)(param_1 + 0x57c) = 1;
  if ((*(char *)(param_1 + 0x5f0) != '\0') && (*(char *)(param_1 + 0x5f1) != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x5ec);
    if (uVar1 - param_2 < 0x240c8401) {
      uVar2 = (uint)(uVar1 < uVar1 - param_2);
    }
    else {
      if (0x240c8400 < param_2 - uVar1) {
        *(undefined1 *)(param_1 + 0x5f0) = 0;
        goto LAB_ram_48031ef4;
      }
      uVar2 = -(uint)(param_2 < uVar1);
    }
    *(uint *)(param_1 + 0x5e0) = uVar1;
    *(uint *)(param_1 + 0x5e4) = uVar2 + 1;
    *(undefined1 *)(param_1 + 0x5f1) = 0;
    *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x584);
  }
LAB_ram_48031ef4:
  if ((*(char *)(param_1 + 0x608) != '\0') && (*(char *)(param_1 + 0x609) != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x604);
    if (uVar1 - param_2 < 0x240c8401) {
      uVar2 = (uint)(uVar1 < uVar1 - param_2);
    }
    else {
      if (0x240c8400 < param_2 - uVar1) {
        *(undefined1 *)(param_1 + 0x608) = 0;
        goto LAB_ram_48031f2e;
      }
      uVar2 = -(uint)(param_2 < uVar1);
    }
    *(uint *)(param_1 + 0x5f8) = uVar1;
    *(uint *)(param_1 + 0x5fc) = uVar2 + 1;
    *(undefined1 *)(param_1 + 0x609) = 0;
    *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_1 + 0x584);
  }
LAB_ram_48031f2e:
  if ((*(char *)(param_1 + 0x620) != '\0') && (*(char *)(param_1 + 0x621) != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x61c);
    if (uVar1 - param_2 < 0x240c8401) {
      uVar2 = (uint)(uVar1 < uVar1 - param_2);
    }
    else {
      if (0x240c8400 < param_2 - uVar1) {
        *(undefined1 *)(param_1 + 0x620) = 0;
        goto LAB_ram_48031f68;
      }
      uVar2 = -(uint)(param_2 < uVar1);
    }
    *(uint *)(param_1 + 0x610) = uVar1;
    *(uint *)(param_1 + 0x614) = uVar2 + 1;
    *(undefined1 *)(param_1 + 0x621) = 0;
    *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_1 + 0x584);
  }
LAB_ram_48031f68:
  puVar3 = (uint *)(param_1 + 0x640);
  do {
    if (((char)puVar3[4] != '\0') && (*(char *)((int)puVar3 + 0x11) != '\0')) {
      uVar1 = puVar3[3];
      if (uVar1 - param_2 < 0x240c8401) {
        uVar2 = (uint)(uVar1 < uVar1 - param_2);
      }
      else {
        if (0x240c8400 < param_2 - uVar1) {
          *(undefined1 *)(puVar3 + 4) = 0;
          goto LAB_ram_48031f94;
        }
        uVar2 = -(uint)(param_2 < uVar1);
      }
      uVar4 = *(uint *)(param_1 + 0x584);
      *puVar3 = uVar1;
      puVar3[1] = uVar2 + 1;
      puVar3[2] = uVar4;
      *(undefined1 *)((int)puVar3 + 0x11) = 0;
    }
LAB_ram_48031f94:
    if (((char)puVar3[0x7c] != '\0') && (*(char *)((int)puVar3 + 0x1f1) != '\0')) {
      uVar1 = puVar3[0x7b];
      if (uVar1 - param_2 < 0x240c8401) {
        uVar2 = (uint)(uVar1 < uVar1 - param_2);
      }
      else {
        if (0x240c8400 < param_2 - uVar1) {
          *(undefined1 *)(puVar3 + 0x7c) = 0;
          goto joined_r0x48032012;
        }
        uVar2 = -(uint)(param_2 < uVar1);
      }
      uVar4 = *(uint *)(param_1 + 0x584);
      puVar3[0x78] = uVar1;
      puVar3[0x79] = uVar2 + 1;
      puVar3[0x7a] = uVar4;
      *(undefined1 *)((int)puVar3 + 0x1f1) = 0;
    }
joined_r0x48032012:
    puVar3 = puVar3 + 6;
    if ((uint *)(param_1 + 0x820) == puVar3) {
      return;
    }
  } while( true );
}


