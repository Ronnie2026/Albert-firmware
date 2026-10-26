/* Firmware entry: 0x4802fc76 */

bool FUN_ram_4802fc76(void)

{
  bool bVar1;
  undefined4 *puVar2;
  void *__s;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6df80 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_ram_4ff206d8(0xe00,0x404);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined2 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0;
        *(undefined1 *)((int)puVar3 + 0x13) = 0;
        *(undefined1 *)(puVar3 + 5) = 0;
        *(undefined1 *)((int)puVar3 + 0x15) = 0;
        *(undefined1 *)((int)puVar3 + 0x16) = 0;
        *(undefined1 *)((int)puVar3 + 0x17) = 0;
        *(undefined1 *)(puVar3 + 6) = 0;
        *(undefined1 *)((int)puVar3 + 0x19) = 0;
        *(undefined1 *)((int)puVar3 + 0x1a) = 0;
        puVar3 = puVar3 + 7;
        DAT_ram_4ff6df80 = puVar2;
      } while (puVar2 + 0x380 != puVar3);
      goto joined_r0x4802fd4a;
    }
LAB_ram_4802feda:
    bVar1 = false;
  }
  else {
joined_r0x4802fd4a:
    if (DAT_ram_4ff6df8c == (void *)0x0) {
      __s = (void *)FUN_ram_4ff206d8(0xa08,0x404);
      if (__s == (void *)0x0) goto LAB_ram_4802feda;
      memset(__s,0,0x528);
      *(undefined4 *)((int)__s + 4) = 1;
      memset((void *)((int)__s + 0x90),0,0x460);
      *(undefined4 *)((int)__s + 0x560) = 0;
      *(undefined4 *)((int)__s + 0x564) = 0;
      *(undefined4 *)((int)__s + 0x568) = 0;
      *(undefined4 *)((int)__s + 0x56c) = 0;
      *(undefined4 *)((int)__s + 0x570) = 0;
      *(undefined4 *)((int)__s + 0x574) = 0;
      *(undefined4 *)((int)__s + 0x578) = 0;
      *(undefined4 *)((int)__s + 0x57c) = 0;
      *(undefined4 *)((int)__s + 0x528) = 0;
      *(undefined4 *)((int)__s + 0x52c) = 0;
      *(undefined4 *)((int)__s + 0x530) = 0;
      *(undefined4 *)((int)__s + 0x534) = 0;
      *(undefined4 *)((int)__s + 0x538) = 0;
      *(undefined4 *)((int)__s + 0x53c) = 0;
      *(undefined4 *)((int)__s + 0x540) = 0;
      *(undefined4 *)((int)__s + 0x544) = 0;
      *(undefined4 *)((int)__s + 0x548) = 0;
      *(undefined4 *)((int)__s + 0x54c) = 0;
      *(undefined4 *)((int)__s + 0x550) = 0;
      *(undefined4 *)((int)__s + 0x554) = 0;
      *(undefined4 *)((int)__s + 0x558) = 0;
      *(undefined4 *)((int)__s + 0x55c) = 0;
      *(undefined4 *)((int)__s + 0x580) = 0;
      *(undefined4 *)((int)__s + 0x584) = 0;
      *(undefined4 *)((int)__s + 0x588) = 0;
      *(undefined4 *)((int)__s + 0x58c) = 0;
      *(undefined4 *)((int)__s + 0x590) = 0;
      *(undefined4 *)((int)__s + 0x594) = 0;
      *(undefined4 *)((int)__s + 0x598) = 0;
      *(undefined4 *)((int)__s + 0x59c) = 0;
      *(undefined4 *)((int)__s + 0x5a0) = 0;
      *(undefined4 *)((int)__s + 0x5a4) = 0;
      *(undefined4 *)((int)__s + 0x5a8) = 0;
      *(undefined4 *)((int)__s + 0x5e0) = 0;
      *(undefined4 *)((int)__s + 0x5e4) = 0;
      *(undefined4 *)((int)__s + 0x5f8) = 0;
      *(undefined4 *)((int)__s + 0x5fc) = 0;
      *(undefined4 *)((int)__s + 0x610) = 0;
      *(undefined4 *)((int)__s + 0x614) = 0;
      *(undefined4 *)((int)__s + 0x628) = 0;
      *(undefined4 *)((int)__s + 0x5ac) = 0;
      *(undefined4 *)((int)__s + 0x5b0) = 0;
      *(undefined4 *)((int)__s + 0x5b4) = 0;
      *(undefined4 *)((int)__s + 0x5b8) = 0;
      *(undefined4 *)((int)__s + 0x5bc) = 0;
      *(undefined4 *)((int)__s + 0x5c0) = 0;
      *(undefined4 *)((int)__s + 0x5c4) = 0;
      *(undefined4 *)((int)__s + 0x5c8) = 0;
      *(undefined4 *)((int)__s + 0x5cc) = 0;
      *(undefined4 *)((int)__s + 0x5d0) = 0;
      *(undefined4 *)((int)__s + 0x5d4) = 0;
      *(undefined2 *)((int)__s + 0x5d8) = 0;
      *(undefined1 *)((int)__s + 0x5da) = 0;
      *(undefined1 *)((int)__s + 0x5db) = 0;
      *(undefined1 *)((int)__s + 0x5dc) = 0;
      *(undefined1 *)((int)__s + 0x5dd) = 0;
      *(undefined4 *)((int)__s + 0x5e8) = 0;
      *(undefined4 *)((int)__s + 0x5ec) = 0;
      *(undefined2 *)((int)__s + 0x5f0) = 0;
      *(undefined4 *)((int)__s + 0x600) = 0;
      *(undefined4 *)((int)__s + 0x604) = 0;
      *(undefined2 *)((int)__s + 0x608) = 0;
      *(undefined4 *)((int)__s + 0x618) = 0;
      *(undefined4 *)((int)__s + 0x61c) = 0;
      *(undefined2 *)((int)__s + 0x620) = 0;
      *(undefined4 *)((int)__s + 0x62c) = 0;
      *(undefined4 *)((int)__s + 0x630) = 0;
      *(undefined4 *)((int)__s + 0x634) = 0;
      *(undefined2 *)((int)__s + 0x638) = 0;
      memset((void *)((int)__s + 0x640),0,0x1e0);
      memset((void *)((int)__s + 0x820),0,0x1e0);
      *(undefined1 *)((int)__s + 0xa00) = 0;
      DAT_ram_4ff6df8c = __s;
    }
    if (DAT_ram_4ff6df88 == 0) {
      DAT_ram_4ff6df88 = FUN_ram_4ff3b144(1);
    }
    DAT_ram_4ff47ec8 = DAT_ram_4ff47ecc;
    bVar1 = DAT_ram_4ff6df88 != 0;
    DAT_ram_4ff6df78 = DAT_ram_4ff6b738;
    DAT_ram_4ff6df6c = DAT_ram_4ff6b738;
    DAT_ram_4ff6df3a = 0;
  }
  return bVar1;
}


